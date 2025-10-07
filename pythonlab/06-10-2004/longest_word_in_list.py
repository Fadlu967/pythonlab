l = []
n = int(input("Enter the length of the list : "))
for i in range(n):
    a = input(f"Enter a word for index number [{i}] : ")
    l.append(a)

def long():
    a = len(l[0])
    for i in l:
        if len(i) > a:
            a = len(i)
    print("longest word length is", a)
long()
        
