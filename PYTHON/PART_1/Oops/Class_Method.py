class Student:
    name="Mohan"
    age=23
    def printall():
        print("Name :",Student.name)
        print("Age  :",Student.age)
Student.printall()
print("Class :",Student.__dict__)
print("Function :",getattr(Student,'printall'))
print("Called getattr function :")
Student.__dict__['printall']() 
print("Called __dict__ :") 
getattr(Student,'printall') ()      