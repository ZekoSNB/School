number_of_elements = int(input())
elements = list(map(int, input().split()))
result = []
for i in range(int(input())):
    inp = int(input())
    if inp in elements:
        result.append(elements.index(inp))
    else:
        result.append(-1)

print(*result, sep='\n')