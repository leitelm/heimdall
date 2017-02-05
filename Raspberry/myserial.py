# -*- coding: utf-8 -*-

import serial, time

arduino = serial.Serial('/dev/ttyACM0', 115200)

# while True:
# 	valor = raw_input()
# 	myserial.write(valor)

fwd = 'f'
reverse = 'r'
stop = 's'

arduino.write(fwd)
time.sleep(5)
arduino.write(reverse)
time.sleep(5)
arduino.write(stop)
time.sleep(5)
arduino.write(fwd)