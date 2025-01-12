class Addition():
    def __init__(self,a):
       self.a=a
    def __add__(a1,a2):
        return a1.a+a2.a
    def __sub__(a1,a2):
        return a1.a-a2.a 

o1=Addition(20)
o2=Addition(30)
print("Value :",o1+o2)
o2=Addition(30)
print("Value :",o1-o2)
