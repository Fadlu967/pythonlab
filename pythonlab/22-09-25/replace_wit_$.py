a = input("Enter a string : ")
b = a[0] + a[1:].replace(a[0], "$")
print(b)
