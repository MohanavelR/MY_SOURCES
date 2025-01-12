import enum

class enums (enum.Enum):
    ROCK = 1
    PAPER=2
    SCISSOR=3


print("Name    :",enums(1).name)    
print("Name    :",enums(2).name)  
print("Name    :",enums(3).name)  
print("Value   :",enums['ROCK'].value)  
print("Value   :",enums["PAPER"].value) 
print("Value   :",enums["SCISSOR"].value) 