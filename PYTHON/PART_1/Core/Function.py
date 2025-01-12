print("keyword : def functionname() :")
def greeting():
    print("Welcome the Python")
greeting() 
greeting()   
greeting()
print("==============================================")
print("Type 1 : no return without arguments") 
def add():
    a=int(input("Enter value of a :"))     
    b=int(input("Enter value of b :"))  
    print("Value :",a+b)
# add()   
print("==============================================")
print("Type 2 : no return with arguments") 
def sub(a,b):
    print("Value :",a-b)
sub(5,8)
print("==============================================")
print("Type 3 : return without arguments") 
def mul():
    a=int(input("Enter value of a :"))     
    b=int(input("Enter value of b :"))  
    return a+b
# print("Value :",mul())
print("==============================================")
print("Type 4 : return with arguments") 
def div(a,b):
    return a/b
print("Value :",div(56,8))
print("==============================================")
print("Type 4 : aribitrary function")
def Sum(*values):
    sum=0
    for i in values:
        sum+=i
    return sum
print("Value :",Sum(34,56,78,90))   
print("==============================================")
print("Type 5 :keyword  function")
def message(name,age):
     print("Your name :",name)
     print("Your Age  :",age)
message("Mohan",21)  
message(21,"Mohan") 
message(age=21,name="Mohan")
print("==============================================")
print("Type 5 :arbitrary keyword  function")  
def Information(**kwargs):
    print("Your Information :",kwargs)
Information(name='Mohan',age=32,city='salem') 
print("==============================================")
print("Type 6 :Default Value  function")    
def User(name="user"):
    print("Welcome ",name)
User("Mohan")  
User()  
print("==============================================")
print("Type 7 :List Value  function")
def Listsum(list):
    return sum(list)
print("Value :",Listsum([3,4,5,6,7]))   
