def atbash(txt):
    txt = list(txt)
    end = []
    lower_case = list("abcdefghijklmnopqrstuvwxyz")
    upper_case = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    for item in txt:
        if isinstance(item, str) and item != ' ':

            if item.isupper():
                end.append((upper_case[:: -1])[upper_case.index(item)])

            else:
                end.append((lower_case[:: -1])[lower_case.index(item)])
        else:
            end.append(item)
    
    return "".join(end)
    

            


print(atbash('hEl23l    '))
	