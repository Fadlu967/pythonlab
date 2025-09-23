a = 2025
b = int(input("Enter a year (above current year): "))
c = 0
for i in range(a, b+1):
    if i % 4 == 0 and i % 100 != 0:
        print(f"{i} is a leap year")
        c += 1
    elif i % 400 == 0:
        print(f"{i} is a leap year")
        c += 1
if c == 0:
    print(f"There are no leap years between {a} and {b}")
else:
    print(f"There are {c} leap years between {a} and {b}")
