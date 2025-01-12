class Student:
    name="Mohan"
    age=23
    def printall(self):
        print("Name :",Student.name)
        print("Age  :",Student.age)
obj=Student()
print("Dot Notation :")
obj.printall()
print("Another Way :")
Student.printall(obj)