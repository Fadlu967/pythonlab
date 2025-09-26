x = 1

while(x == 1):
    print("\n--------------MENU--------------\n")
    print("1. Find occurance of word")
    print("2. Find character frequency")
    print("3. Display the factors of a given number")
    print("4. Exit")

    z = int(input("\nChoose one of the option from menu (1-4) : "))
    
    if z == 1:
        a = input("\nEnter the text : ")
        b = a.split()
        s = set(b)
        for i in s:
            print(i, "=", b.count(i))
    elif z == 2:
        a = input("\nEnter the text : ")
        b = set(a)
        for i in b:
            print(f"{i} = {a.count(i)}")
    elif z == 3:
        a = int(input("\nEnter a number : "))
        print(f"\nFactors of {a} are : ")
        for i in range(1, a+1):
            if a % i == 0:
                print(i)
    elif z == 4:
        x += 1
    else:
        print("\nInvalid input")
        
