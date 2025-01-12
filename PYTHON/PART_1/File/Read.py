
try:
  file=open('text.txt','r')
  line=file.read()
  print(line)
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()  
print('this is read all lines ')  