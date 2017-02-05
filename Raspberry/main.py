# -*- coding: utf-8 -*-
import serial, time, xbox

def fmtFloat(n):
    return '{:6.3f}'.format(n)
    
joy = xbox.Joystick()

# arduino = serial.Serial('/dev/ttyACM0', 115200)

print "starting heimdall app"

while not joy.Back():
    # Show connection status
    if joy.connected():
        print "Connected   ",
    else:
        print "Disconnected",
    print 'X:', joy.rightX()
    print 'Y:', joy.rightY()

    if(joy.rightY() > 0):
    	# arduino.write('f')
    	pass
    if(joy.rightY() == 0):
    	# arduino.write('s')
    	pass
    if(joy.rightY() < 0):
    	# arduino.write('r')
    	pass

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
        