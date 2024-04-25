import turtle, random

gap_x = random.randint(100, 200)
gap_y = random.randint(100, 200)
gaps = [5]
for i in range(5):
    gaps.append(gaps[i] + random.randint(1, 3))
screen = turtle.Screen()
screen.bgcolor("white")
screen.setup(width=500, height=500)

turtle.penup()
turtle.goto(0 - gap_x, screen.window_height() / 2)
turtle.pendown()
turtle.goto(0 - gap_x, -screen.window_height() / 2)
turtle.penup()
for i in range(5):
    print(gaps[i])
    turtle.goto(0 - gap_x + gaps[i], screen.window_height() / 2)
    turtle.pendown()
    turtle.goto(0 - gap_x + gaps[i], -screen.window_height() / 2)
    turtle.penup()
    turtle.goto(0 - gap_x + gaps[i], screen.window_height() / 2)

turtle.goto(0 + gap_x, screen.window_height() / 2)
turtle.pendown()
turtle.goto(0 + gap_x, -screen.window_height() / 2)
turtle.penup()

for i in range(5):
    turtle.goto(0 + gap_x - gaps[i], screen.window_height() / 2)
    turtle.pendown()
    turtle.goto(0 + gap_x - gaps[i], -screen.window_height() / 2)
    turtle.penup()
    turtle.goto(0 + gap_x - gaps[i], screen.window_height() / 2)


screen.exitonclick()