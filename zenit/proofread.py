# Zenit test

def sifra_text(dohoda, text):
    ai_list = ['a','b','c','d','e','f','g','h','i']
    jr_list = ['j','k','l','m','n','o','p','q','r']
    sz_list = ['s','t','u','v','w','x','y','z']
    n_text = text
    text = list(text)
    ai_sort = []
    jr_sort = []
    sz_sort = []


    for i in text:
        for j in ai_list:
            if i == j:
                ai_sort.append(i) 
        for j in jr_list:
            if i == j:
                jr_sort.append(i)
        for j in sz_list:
            if i ==j:
                sz_sort.append(i)
    print(n_text)
    print(ai_sort, jr_sort, sz_sort)

if __name__ == '__main__':
    sifra_text([1,3,2], 'hanktmakoau_s__aojj') 
