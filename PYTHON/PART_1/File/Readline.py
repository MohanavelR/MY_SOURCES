try:
  file=open('text.txt','r')
  print("Line1 :",file.readline())
  print("Line2 :",file.readline(3))
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()
print('this is print line by line and Your charactors')
print('readline(Your charactor)')  
 