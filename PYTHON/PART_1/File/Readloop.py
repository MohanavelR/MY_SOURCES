try:
  file=open('text.txt','r')
  for line in file:
     print('Line :',line)
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()
print('this is print line by line and Your charactors')
print('readline(Your charactor)')    