a = input("Enter a file name (eg: abc.png): ")
b = a[::-1]
c = b.index(".")
a = b[:c]
print("Extention is : ", a[::-1])
