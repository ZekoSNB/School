#print(int('{0:032b}'.format(int(input()))[::-1], 2)
import time 

start_time = time.time()
def dec_to_bin_reversed():
    try: 
        inp = int(input())
        dec_to_bin = '{0:032b}'.format(inp)
        print(dec_to_bin)
        dec_to_bin = dec_to_bin[::-1]
        print(dec_to_bin)
        result = int(dec_to_bin, 2)
        print(result)
    except ValueError:
        print("value error")
        dec_to_bin_reversed()


# dec_to_bin_reversed()

# i = 0
# while i <= 600:
    # print(i)
    # i += 1
# def mill(num):
#     if num <= 600:
#         num += 1
#         mill(num)
# mill(i)
dec_to_bin_reversed()
print(f'{time.time() - start_time} s')