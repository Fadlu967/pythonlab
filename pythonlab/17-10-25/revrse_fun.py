def digit():
    num = int(input("Enter a number (atleast 4 digits) : "))
    if num < 1000:
        print("Invalid input!")
    else:
        return num

def reverse(num):
    reverse_num = 0
    while num > 0:
        d = num % 10
        reverse_num = reverse_num * 10 + d
        num = num // 10
    print(reverse_num)

num1 = digit()
reverse(num1)

    
