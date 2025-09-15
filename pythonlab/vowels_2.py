a = input("Enter the word : ")
n = len(a)
i = 0
list=[]
while(i < n):
    if(a[i] == "a" or a[i] == "A" or a[i] == "e" or a[i] == "E" or a[i] == "i" or a[i] == "I" or a[i] == "o" or a[i] == "O" or a[i] == "u" or a[i] == "U"):
        list.append(a[i])
    i+=1
print(list)
