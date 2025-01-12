class User():
    def __init__(self,name,age):
        self._name=name
        self.age=age
        # self.msg=self.name+' is age '+str(self.age)+" Year Old"    
    def get_name(self):
        return self._name  
    def set_name(self,name):
        self._name=name
    name = property(get_name , set_name)



user=User("Mohan",23)
# print("Name :",user.__name)
print("Age  :",user.age)
print("Use Method (Name):",user.get_name)    
user.set_name="Jegan"     
print("Use Method (Name):",user.get_name)  
# print("Getter method in name settermethod setname to decortor ")
# print("example getter method name is get_name you set setter method decorator @get_name.setter")