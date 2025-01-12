class Student:
    count=0
    
    def __init__(self,name,age):
        self.__name=name
        self.__age=age
        Student.count+=1
    def __getter(self):
        print("Name :",self.__name)
        print("Age  :",self.__age)
     
    