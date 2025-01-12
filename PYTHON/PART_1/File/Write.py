try:
  file=open('text.txt','w')
  file.write("Hi Hello")
  file=open('text.txt','r')
  line=file.read()
  print(line)  
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()
  print("success writed... ")
print('this is print line by line and Your charactors')
print('readline(Your charactor)')    