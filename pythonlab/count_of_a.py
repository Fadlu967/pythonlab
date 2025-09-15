n = int(input("Enter number of names you are going to enter : "))
l = []
c = 0
for i in range(n):
    a = input(f"Enter full name number {i+1} : ")
    b = a.split()
    d = b[0]
    l.append(d)

    for j in d:
        if j=="a":
            c+=1
print(f"List of first names : {l}")
print(f"Number of \'a\' in the first names is {c}")

