import copy
print('I am Create nested list')
names=[['Mohan','Jegan'],['Karthi','Bala','Selva']]
print('My Original list :',names)
names2=copy.deepcopy(names)
print('Copy list        :',names2)
names[0][0]='Anbu'
print("names[0][0]='Anbu'")
print('My Original list :',names)
print('Copy list        :',names2)
print("this Way is correct")