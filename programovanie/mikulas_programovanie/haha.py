import tkinter as tk

# Create a Tkinter window
window = tk.Tk()

# Create a canvas widget
canvas = tk.Canvas(window, width=400, height=400)
canvas.pack()

# Draw a line on the canvas
canvas.create_line(150, 150, 250, 250)
canvas.create_line(150, 250, 250, 150)
canvas.create_line(250, 250, 200, 300)
canvas.create_line(150, 250, 100, 200)
canvas.create_line(150, 150, 200, 100)
canvas.create_line(250, 150, 300, 200)
# Start the Tkinter event loop
window.mainloop()