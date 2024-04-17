import tkinter as tk
import random 



window = tk.Canvas(bg='white', width=500, height=500)
window.pack() 

def cesta():
    window.create_line(-50, 400, 550, 50, fill='grey',width=60)

def zaba(x,y,width):
    #eyes
    window.create_oval(x+5, y-5, x+width/2, y+width/2, fill="green", tag='zaba')

    window.create_oval(x-5+width, y-5, x+width/2, y+width/2, fill="green", tag='zaba')
    #nohy
    window.create_oval(x+width/2, y+width-5, x+width, y+width+5, fill="green", tag='zaba')
    window.create_oval(x-5, y+width+5, x+width/2, y+width-5, fill="green", tag='zaba')
    #telo
    window.create_oval(x, y, x+width, y+width, fill="green", tag='zaba')

def animacia(sumy):
    x,y = random.randint(2,4), random.randint(7, 10)
    window.move("zaba", -x, -y)
    window.update()
    window.after(30)
    sumy -= y
    if sumy > 0:
        animacia(sumy)
cesta()
zaba(200, 430, 50)
animacia(430)

window.mainloop()
