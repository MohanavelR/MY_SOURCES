a=[1,2,3,4]
try:
    print(10/0)
    print(a[10])
    print(x)
    print(int("Mohan"))

except IndexError as e:
    print("Total index is ",len(a),"can't possible....")
    print("Error :",e)
except ValueError as e:
    print("Can't convert string ")
    print("Error :",e)
except ZeroDivisionError as e:
    print("10 divited by 0 is not Possible")
    print("Error :",e)  
except NameError as e:
    print("This is  Name Error Not Declare variable ")
    print("Error :",e)       

