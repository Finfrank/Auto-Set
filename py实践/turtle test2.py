import turtle as t
import random
import time
def dark_sky():
    t.screensize(bg="black")          
    t.colormode(255)
    t.pensize(50)              
    for i in range(0,150):      
        red=i
        green=i
        blue=i
        t.color(red,green,blue)
        t.up()
        y=3*i
        t.goto(-350,150-y)    
        t.down()
        t.forward(700)
dark_sky()