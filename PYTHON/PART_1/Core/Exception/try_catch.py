
try:
    # a=10/3
    a=10/0

except Exception as e:
    print("Error :",e)
else:
    print("Value :",a)
finally:
    print("I am Always Running.....")  
print("Total Exceptions :",len(dir(locals()['__builtins__'])) )        

print("Total Exceptions :",(dir(locals()['__builtins__'])) )  