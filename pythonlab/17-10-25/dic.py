student = {"name":"abu", "roll number":2, "register number":123, "department":"mca", "semester":1}
print(student,"\n")

total = int(input("Enter total mark of the student : "))
student["total mark"] = total

print(student,"\n")

if total > 90:
    grade = "A"
elif total > 82:
    grade = "B"
elif total > 75:
    grade = "C"
elif total > 60:
    grade = "D"
elif total > 50:
    grade = "P"
    
print("Grade of the student is ", grade, "\n")
del student["roll number"]

print(student)
