#test case 1
multiples1, symbol1 = input().split()
multiples1 = int(multiples1)

for i in range(1, 51): 
    if i % multiples1 == 0:
        print(symbol1, end=" ")
    else:
        print(i, end=" ")
print()

#test case 2
multiples2, symbol2 = input().split()
multiples2 = int(multiples2)

for i in range(1, 51): 
    if i % multiples2 == 0:
        print(symbol2, end=" ")
    else:
        print(i, end=" ")
print()

#test case 3
multiples3, symbol3 = input().split()
multiples3 = int(multiples3)

for i in range(1, 51): 
    if i % multiples3 == 0:
        print(symbol3, end=" ")
    else:
        print(i, end=" ")
print()