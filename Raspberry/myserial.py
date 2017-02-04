import serial

myserial = serial.Serial('/dev/ttyACM0', 115200)

while True:
	valor = raw_input()
	myserial.write(valor)