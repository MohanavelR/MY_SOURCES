try:
    file=open('text.txt')
except FileNotFoundError as e:
    print("File not found ")
    print("Error :",e)    
else:
   print(file.read())