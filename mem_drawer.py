import time
import math
import gc
import sys

x = 1
string_drawer = []

while True:

    #Formula for the eqaution (sin curve)
    y = (abs(math.sin(math.radians(x))))*51200000
    print (y, type(y))

    #Making y type 'int' so that it can be used to append
    y = int(round(y))
    print (y, type(y))

    #Checking the size of string_drawer for debugging
    print(sys.getsizeof(string_drawer))

    #Loop used for appending
    if sys.getsizeof(string_drawer) < y: #If y is bigger, find the difference and append

        y = y - sys.getsizeof(string_drawer)
        string_drawer.append(' ' *y)

    elif sys.getsizeof(string_drawer) > y: #If y is smaller, delete the variable and make a new one

        string_drawer = [] *y

    else: #If y is the same size as string_drawer, do nothing

        pass

    #Call the Python gerbage colector
    gc.collect()

    #Sleep to make sure Task Manager catches the change in RAM usage
    time.sleep(0.5)

    #Increment x
    x += 1
    print(x, type(x))
