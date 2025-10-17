word = input("Enter a string : ")
word1 = word[::-1]
a = word1[:3:]
if a == "gni":
    word += "ly"
else:
    word += "ing"
print(word)
