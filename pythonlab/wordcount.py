a =input("Enter the text : ")
b = a.split()
s = set(b)
for i in s:
    print(i, "=", b.count(i))
