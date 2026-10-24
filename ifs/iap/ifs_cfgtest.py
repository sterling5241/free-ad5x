#!/usr/bin/env python3
# Send Kalico config commands to the IFS back to back, then get_config, and report serial stats
# usage: ifs_cfgtest.py <port> <cmdfile>
import sys, time, threading
sys.path.insert(0, '/usr/data/kalico/klipper')
from klippy import reactor, serialhdl

port, cmdfile = sys.argv[1], sys.argv[2]
cmds = [l.strip() for l in open(cmdfile) if l.strip()]
r = reactor.Reactor()
ser = serialhdl.SerialReader(r)
result = {}
ser.handle_default = lambda params: print('msg', params, flush=True)
ser.handle_unknown = ser.handle_default

def run(eventtime):
    ser.connect_uart(port, 115200)
    msgparser = ser.get_msgparser()
    print('connected', msgparser.get_version_info()[0], flush=True)
    for c in cmds:
        ser.send(c)
    t0 = r.monotonic()
    try:
        params = ser.send_with_response('get_config', 'config')
        result['config'] = params
    except Exception as e:
        result['error'] = repr(e)
    result['time'] = r.monotonic() - t0
    r.end()

def watchdog():
    time.sleep(40)
    print('timeout, stats:', ser.stats(r.monotonic()), flush=True)
    print(ser.dump_debug(), flush=True)
    import os
    os._exit(1)

threading.Thread(target=watchdog, daemon=True).start()
r.register_callback(run)
r.run()
print(result, flush=True)
print('stats:', ser.stats(r.monotonic()), flush=True)
ser.disconnect()
