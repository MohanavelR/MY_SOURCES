class Student:
    name="Mohan"
    age=34
print("Attribute Method :setattr() :")
setattr(Student,'gender','Male')
print("setattr(Student,'gender','Male')")
print("i use Dot Notation :")
print("Age    :",Student.age)
print("Name   :",Student.name)
print("Gender :",Student.gender)
print("====================================")
setattr(Student,'name','jegan')
print("setattr(Student,'name','jegan')")
print("i use Dot Notation :")
print("Age    :",Student.age)
print("Name   :",Student.name)
print("Gender :",Student.gender)
print("=====================================")
print("set Dot Notation :")
print('Student.city="Salem"')
Student.city="Salem"
print("i use Dot Notation :")
print("Age    :",Student.age)
print("Name   :",Student.name)
print("Gender :",Student.gender)
print("City   :",Student.city)