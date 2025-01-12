a=10
print("this is  Even number") if a%2==0 else print("this isn't Even Number")

mark1=input("Enter Mark1 :")
mark2=input("Enter Mark2 :")
mark3=input("Enter Mark3 :")
if mark1.isnumeric() and mark2.isnumeric() and mark3.isnumeric():
    mark1=int(mark1)
    mark2=int(mark3)
    mark3=int(mark3)
else: 
    print("Invailed Marks...")
    exit(0)
result='Pass' if mark1>35 and mark2>35 and mark3>35  else 'Fail'
print("Result :",result)   


