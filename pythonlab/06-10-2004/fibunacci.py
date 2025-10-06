def fib(n):
    a = 0
    b = 1
    if n==1:
        print(a)
    elif n==2:
        print(a, "\n", b)
    else:
        print(a)
        for i in range(2, n+1):
            a += b
            b = a - b
            print(a)
            
d = int(input("Enter the limit : "))
fib(d)
            
            
        
