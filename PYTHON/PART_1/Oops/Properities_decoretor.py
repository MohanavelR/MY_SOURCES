class User():
    def __init__(self,name,age):
        self.name=name
        self.age=age
        # self.msg=self.name+' is age '+str(self.age)+" Year Old"
    @property
    def msg(self):
        return self.name+' is age '+str(self.age)+" Year Old"     
user=User("Mohan",age=34)
print("Name   :",user.name)
print("Age    :",user.age)
print("Message:",user.msg )  
user.age=21
print("user.age=21")
print("Name   :",user.name)
print("Age    :",user.age)
print("Message:",user.msg )
print("I am changed age is 21 but msg not change ")   
print("Name   :",user.name)
print("Age    :",user.age)
print("Message:",user.msg )