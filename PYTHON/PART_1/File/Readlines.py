try:
  file=open('text.txt','r')
  print("Line1 :",file.readlines())
#   print("Line2 :",file.readlines(3))
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()
print('this is print line by line in List also spaces')
print('readline(Your charactor)')    