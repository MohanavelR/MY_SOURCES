class Student:
    name="Mohan"
    age=34
print("=====================================")
print("Attribute Method :getattr() :")
print("Age :",getattr(Student,'age'))
print("getattr(classname,'attributename ','getattr is no message')")
print("Gender :",getattr(Student,"gender","No attribute"))
print("====================================")
print("get Dot Notation :")
print("Age :",Student.age)
print("Name:",Student.name)
print("====================================")