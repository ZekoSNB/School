import tkinter
import random
import time

vsetky_nasobky = []
nums = []
nasobok = random.randint(2, 9)
m = random.randint(3, 5)
n = random.randint(3, 10)
for i in range(m):
    a = []
    for j in range(n):
        a.append(random.randint(1, 50))
    nums.append(a)

for i in range(m):
    for j in range(n):
        if nums[i][j] % nasobok == 0:
            vsetky_nasobky.append(nums[i][j])

window = tkinter.Tk()
canvas = tkinter.Canvas(window, width=800, height=800)
canvas.pack()
if vsetky_nasobky == []:
    canvas.create_text(400, 400, text="Gratulujem, vsetky nasobky boli spravne", font=("Arial", 25))
def rectangle_clicked(num, tag):
    if num % nasobok == 0:
        canvas.itemconfig(tag, fill="peru")
        vsetky_nasobky.remove(num)
        if vsetky_nasobky == []:
             canvas.create_text(400, 400, text="Gratulujem, vsetky nasobky boli spravne", font=("Arial", 25))
    elif num % nasobok != 0:
        canvas.itemconfig(tag, fill="red")
        window.after(5000, lambda: reset_color(tag))

def reset_color(tag):
    canvas.itemconfig(tag, fill="limegreen")

for i in range(m):
    for j in range(n):
        x = j * 80
        y = i * 80
        canvas.create_rectangle(x, y, x + 70, y + 70, outline="black", fill="limegreen", tag=f"rectangle-{i}-{j}")
        canvas.create_text(x + 35, y + 35, text=str(nums[i][j]), font=("Arial", 25), tag=f"rectangle-text-{i}-{j}")
        canvas.tag_bind(f"rectangle-{i}-{j}", "<Button-1>", lambda event, num=nums[i][j], tag=f"rectangle-{i}-{j}": rectangle_clicked(num, tag))
print(vsetky_nasobky)


canvas.create_text(400, 750, text=f"nasobok {nasobok}", font=("Arial", 25))
window.mainloop()