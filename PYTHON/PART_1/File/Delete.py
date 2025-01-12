import os 

if os.path.exists('text.txt'):
    os.remove('text.txt')
    os.rmdir('path')
else:
    print("file is exists")    
print("rmdir  : folder delete")
print("remove : file delete")