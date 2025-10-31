d = int(input("Enter the limit : "))
if d < 1:
    print("Invalid input!")
else:
    print(f"First {d} fibunacci numbers are : ")
    
    def fib(n):
        a = 0
        b = 1
        if n==1:
            print(a)
        else:
            print(a)
            for i in range(n-1):
                a += b
                b = a - b
                print(a)        
    fib(d)
            
            
        
