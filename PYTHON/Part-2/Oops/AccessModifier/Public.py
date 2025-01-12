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

        