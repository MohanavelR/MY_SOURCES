class Student:
    count=0
    
    def __init__(self,name,age):
        self.name=name
        self.age=age
        Student.count+=1
    def getter(self):
        print("Name :",self.name)
        print("Age  :",self.age)
    @classmethod    
    def dis(cls):
        print("Count is :",cls.count)
s1=Student("Mohan",21)
s2=Student("Karthi",31)
s2.dis()
print(s2.count)
s2.count=56
Student.dis()            