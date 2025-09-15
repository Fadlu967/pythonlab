a = input("Enter the word : ")
n = len(a)
v = ["a","e","i","o","u","A","E","I","O","U"]
i = 0
list=[]
while(i < n):
    for j in v:
        if(a[i] == j):
            list.append(a[i])
    i += 1
print(list)
