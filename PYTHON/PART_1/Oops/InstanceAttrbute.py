class User:
    cource='Python'
obj=User()
print("Cource class:",User.cource)
print("Cource Obj  :",obj.cource)
obj.cource="Java"
print('obj.cource="Java"')    
print("Cource class:",User.cource)
print("Cource Obj  :",obj.cource)
User.cource="c++"
print('User.cource="c++"')
print("Cource class:",User.cource)
print("Cource Obj  :",obj.cource)
obj.dp="CSE"
print('obj.dp="CSE"')
print("dp class:",getattr(User,'dp','No Attribute'))
print("dp Obj  :",obj.dp)
User.collage='jkkn'
print("User.collage='jkkn'")
print("collage class:",getattr(User,'collage','No Attribute'))
print("collage Obj  :",obj.collage)
print("Class attrubutes all access object but Object attributes no access Class")