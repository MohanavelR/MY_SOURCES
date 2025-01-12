class Student:
    name="Mohan"
    age=34
    gender="Male"
print("Age    :",Student.age)
print("Name   :",Student.name)
print("Gender :",getattr(Student,'gender',"No Attribute"))    
print("Delete Attributes :delattr()")    
delattr(Student,'gender')
print("delattr(Student,'gender')")   
print("Class :",Student.__dict__) 
print("Age    :",Student.age)
print("Name   :",Student.name)
print("Gender :",getattr(Student,'gender',"No Attribute"))
print("============================================")
print("Del key word :")
print("Age    :",Student.age)
print("Name   :",Student.name)
del Student.name
print("del Student.name")
print("Name :",getattr(Student,'name',"No Attribute"))
print("Age  :",Student.age)