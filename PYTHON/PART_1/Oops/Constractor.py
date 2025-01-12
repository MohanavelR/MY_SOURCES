class Student():
    def __init__(self,name):
        self.name=name
        print("I am calling.......")
    def all(self):
        print("Name",self.name)    

s=Student("Mohan")
s.all()
s2=Student("Jegan")
s2.all()
s3=Student("Bala")
s3.all()
