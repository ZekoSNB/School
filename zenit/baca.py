sada = input().split(' ')
name = input().split(' ')
inp_list = []
output_list = []


for i in range(int(sada[0])):
    inp_list.append(list(input()))

for i in range(len(inp_list)):
    fun_list = []
    for j in inp_list[i]:
        if j.isdigit():
            fun_list.append(name[int(j)-1])
        else:
            fun_list.append(j)
    output_list.append(fun_list)
        
for i in output_list:
    print(''.join(i))