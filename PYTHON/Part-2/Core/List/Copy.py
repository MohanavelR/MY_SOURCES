names=['Mohan','Jegan','Karthi','Bala','Selva']
print('My Original list :',names)
names2=names.copy()
print('Copy list        :',names2)
names[0]='Anbu'
print("names[0]='Anbu'")
print('My Original list :',names)
print('Copy list        :',names2)
print('this ok but go to next')
print("================================")
print('I am Create nested list')
names=[['Mohan','Jegan'],['Karthi','Bala','Selva']]
print('My Original list :',names)
names2=names.copy()
print('Copy list        :',names2)
names[0][0]='Anbu'
print("names[0][0]='Anbu'")
print('My Original list :',names)
print('Copy list        :',names2)
print("one demain list copy is good but two demains list never user copy function ")
print('You use Deepcopy...')