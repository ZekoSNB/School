inp = input().split(' ')
input_list = input().split(' ')
output_list = []

for i in range(int(inp[0])-int(inp[1])+1):
    highest_number = max([input_list[i], input_list[i+1], input_list[i+2]])
    print(highest_number)
    output_list.append(highest_number)

print(' '.join(output_list))