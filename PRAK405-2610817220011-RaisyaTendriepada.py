#test case 1
n1, k1 = input().split()
n1 = int(n1)
k1 = int(k1)
total = 0

for i in range(1, n1 + 1):
    subtotal = 0
    for j in range(i, 0, -1):
        print("(" + str(j) + " * " + str(k1) + ")", end="")
        subtotal += j * k1
        if j > 1:
            print(" + ", end= "")
    print(" =", subtotal)
    total += subtotal
print(total)

#test case 2
n2, k2 = input().split()
n2 = int(n2)
k2 = int(k2)
total = 0

for i in range(1, n2 + 1):
    subtotal = 0
    for j in range(i, 0, -1):
        print("(" + str(j) + " * " + str(k2) + ")", end="")
        subtotal += j * k2
        if j > 1:
            print(" + ", end= "")
    print(" =", subtotal)
    total += subtotal
print(total)

#test case 3
n3, k3 = input().split()
n3 = int(n3)
k3 = int(k3)
total = 0

for i in range(1, n3 + 1):
    subtotal = 0
    for j in range(i, 0, -1):
        print("(" + str(j) + " * " + str(k3) + ")", end="")
        subtotal += j * k3
        if j > 1:
            print(" + ", end= "")
    print(" =", subtotal)
    total += subtotal
print(total)