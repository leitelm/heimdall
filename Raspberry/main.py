# -*- coding: utf-8 -*-
import serial, time, xbox

# f = frente
# b = trás
# r = direita
# l = esqerda
# s = stop
#
# 1 = r1_on
# 2 = r2_on
# 3 = r3_on
# 4 = r4_on
# 5 = r1_off
# 6 = r2_off
# 7 = r3_off
# 8 = r4_off
#
# x = up_ro
# y = up_phi
# z = down_ro
# w = down_phi

joy = xbox.Joystick()

arduino = serial.Serial('/dev/ttyACM0', 115200)
fwd = 'f'
back = 'b'
right = 'r'
left = 'l'
stop = 's'

r1_on = '1'
r2_on = '2'
r3_on = '3'
r4_on = '4'
r1_off = '5'
r2_off = '6'
r3_off = '7'
r4_off = '8'

up_ro = 'x'
up_phi = 'y'
down_ro = 'z'
down_phi = 'w'

print "starting heimdall app"

command = ""


def send_data(data):
    global command
    if (data != command):
        arduino.write(data)
        print(data)
        command = data


while not joy.Back():

    # Show connection status
    if joy.connected():
        print "Connected   ",
    else:
        print "Disconnected",

    # Right
    if (joy.rightX() > 0):
        send_data(right)
    # Left
    elif (joy.rightX() < 0):
        send_data(left)
    # Forward
    elif (joy.rightY() > 0):
        send_data(fwd)
    # Backward
    elif (joy.rightY() < 0):
        send_data(back)
    # Stop
    elif (joy.rightY() == 0):
        send_data(stop)

    # Ro up
    if (joy.leftX() > 0):
        send_data(up_ro)
    # Ro down
    elif (joy.leftX() < 0):
        send_data(down_ro)
    # Phi Up
    elif (joy.leftY() > 0):
        send_data(up_phi)
    # Phi down
    elif (joy.leftY() < 0):
        send_data(down_phi)

    if joy.dpadUp():
        send_data(r1_on)
    if joy.dpadDown():
        send_data(r2_on)
    if joy.dpadRight():
        send_data(r3_on)
    if joy.dpadLeft():
        send_data(r4_on)

    if joy.Y():
        send_data(r1_off)
    if joy.A():
        send_data(r2_off)
    if joy.B():
        send_data(r3_off)
    if joy.X():
        send_data(r4_off)
joy.close()

# # Left analog stick
# print "Lx,Ly ",fmtFloat(joy.leftX()),fmtFloat(joy.leftY()),
# print "Rx,Ry ",fmtFloat(joy.rightX()),fmtFloat(joy.rightY()),
# # Right trigger
# print "Rtrg ",fmtFloat(joy.rightTrigger()),
# # A/B/X/Y buttons
# print "Buttons ",
# if joy.A():
#     print "A",
# else:
#     print " ",
# if joy.B():
#     print "B",
# else:
#     print " ",
# if joy.X():
#     print "X",
# else:
#     print " ",
# if joy.Y():
#     print "Y",
# else:
#     print " ",
# # Dpad U/D/L/R
# print "Dpad ",
# if joy.dpadUp():
#     print "U",
# else:
#     print " ",
# if joy.dpadDown():
#     print "D",
# else:
#     print " ",
# if joy.dpadLeft():
#     print "L",
# else:
#     print " ",
# if joy.dpadRight():
#     print "R",
# else:
#     print " ",
