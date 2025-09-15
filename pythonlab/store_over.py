n = int(input("Enter the size of the list : "))
l = []
for i in range(n):
    a = int(input(f"Enter index [{i}] : "))
    if a > 100:
        a = "over"
        l.append(a)
    else:
        l.append(a)
print(l)
