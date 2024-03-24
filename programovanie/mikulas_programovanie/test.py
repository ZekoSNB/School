from tkinter import *

canvas = Canvas(width=400, height=400, bg='white')
canvas.pack()

canvas.create_oval(100, 100, 200, 175, fill='light blue')
canvas.create_oval(120, 120, 200, 155, fill='white')

canvas.create_rectangle(150, 50, 250, 240, fill='light blue')
canvas.create_oval(150, 25, 250, 75, fill='light blue')
canvas.create_oval(150, 225, 250, 250, fill='light blue')


mainloop()