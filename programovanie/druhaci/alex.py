while True:
    try:
        inp = int(input('Enter a number: '))
        break
    except ValueError:
        print('wrong values, enter a number')

for i in range(inp):
    for j in range(i+1):
        print(j+1, end=' ')
    print()
