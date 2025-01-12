class Student:
    
    def __init__(self,name,age):
        self.name=name
        self.age=age

    def getter(self):
        print("Name :",self.name)
        print("Age  :",self.age)
    @staticmethod
    def greeting():
        print("Welcome To Python")    
Student.greeting()
s1=Student("Mohan",21)
s1.getter()
s1.greeting()  

