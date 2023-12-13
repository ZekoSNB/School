pocet = int(input())

sucet = []
for i in range(pocet):
    inp = int(input())
    sucet.append(inp)

final = 0
for i in sucet:
    final += i
for i in sucet:
   print(final - i)
        
