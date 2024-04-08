import tkinter as tk
import random

window = tk.Tk()
window.title("Car Animation")
canvas = tk.Canvas(window, width=1000, height=1000)
canvas.pack()

def husenica(x, y, n):
    for i in range(n):
        canvas.create_oval(x + i * 10, y, x + i * 10 + 50, y + 50, fill="red")
def kapusta(x, y):
    canvas.create_oval(x, y, x + 20, y + 20, fill="green")



husenica(-50, 200, 10)
kapusta(200, 200)
window.mainloop()