class Student:
    count=0
    
    def __init__(self,name,age):
        self._name=name
        self._age=age
        Student.count+=1
    def getter(self):
        print("Name :",self._name)
        print("Age  :",self._age)