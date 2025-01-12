# user_input=input('Enter Your Name :')
# print('Your Name     :',user_input)
# print('Default input value is string')
# a=int(input('Enter Value a :'))
# b=int(input('Enter Value b :'))
# print('(a+b) Value    :',a+b)
# print('Multible Input Value :')
# name1,name2,name3=input('Enter Three Name :').split(',')
# print('Name 1 :',name1)
# print('Name 2 :',name2)
# print('Name 3 :',name3)
print("Multible line input :")
lines=[]
while True :
    line=input("Enter Line :")
    if line:
        lines.append(line)
    else:
        break
print("Your Line is :\n",'\n'.join(lines))        

