#!/usr/bin/env python3
import serial
import time
if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
    ser.flush()
    while True:
        ser.write(b"1\n")
        time.sleep(1)
        ser.write(b"0\n")
        time.sleep(1)
