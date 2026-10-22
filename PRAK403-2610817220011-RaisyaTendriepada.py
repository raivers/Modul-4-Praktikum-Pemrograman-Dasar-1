#test case 1
a1, b1 = input().split()
a1 = int(a1)
b1 = int(b1)

if a1 < b1:
    step = 1
else: 
    step = -1

for i in range(abs(a1-b1) + 1):
    if i > 0:
        print("-", end=" ")
    print(a1 + i * step, b1 - i * step, end=" ")
print()

#test case 2
a2, b2 = input().split()
a2 = int(a2)
b2 = int(b2)

if a2 < b2:
    step = 1
else: 
    step = -1

for i in range(abs(a2-b2) + 1):
    if i > 0:
        print("-", end=" ")
    print(a2 + i * step, b2 - i * step, end=" ")
print()

#test case 3
a3, b3 = input().split()
a3 = int(a3)
b3 = int(b3)

if a3 < b3:
    step = 1
else: 
    step = -1

for i in range(abs(a3-b3) + 1):
    if i > 0:
        print("-", end=" ")
    print(a3 + i * step, b3 - i * step, end=" ")
print()

#test case 4
a4, b4 = input().split()
a4 = int(a4)
b4 = int(b4)

if a4 < b4:
    step = 1
else: 
    step = -1

for i in range(abs(a4-b4) + 1):
    if i > 0:
        print("-", end=" ")
    print(a4 + i * step, b4 - i * step, end=" ")
print()