l1= []
l2 = []
c = 0
n1 = int(input("Enter the length of list 1 : "))
for i in range(n1):
    a = int(input(f"Enter element of index [{i}] : "))
    l1.append(a)

n2 = int(input("\n Enter the length of list 2 : "))
for j in range(n2):
    b = int(input(f"Enter element of index [{j}] : "))
    l2.append(b)

if len(l1) == len(l2):
    print("\n Both lists are same length.")
else:
    print("\n Both lists dont have same length.")

if sum(l1) == sum(l2):
    print("\n Both lists sums to same value.")
else:
    print("\n Both lists dont sums to same value.")

for k in l1:
    for l in l2:
        if k == l:
            print(f"\n Both list have same value : {k}")
            c = 1
if c == 0:
    print("\n Both list dont have any same values")
    
            
