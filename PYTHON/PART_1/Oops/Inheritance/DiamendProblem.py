class A:
    def display(self):
        print("I am display of A")
class B(A):
    # def display(self):
    #     print("I am display of B")
    pass            
class C(A):
    # def display(self):
    #     print("I am display of C") 
    pass       
class D(B,C):
    # def display(self):
    #     print("I am display of D")    
    pass    

d=D()
d.display()        