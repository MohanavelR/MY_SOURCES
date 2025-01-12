try:
  file=open('text.txt','a')
  file.write('i mohan')
  file=open('text.txt','r')
  line=file.read()
  print(line)  
  file.close()
except FileNotFoundError as e:
  print("File is not there")  
  print('error :',e)
else:
  file.close()
print('this is print line by line and Your charactors')
print('readline(Your charactor)')    