users=[
    {"fname":"Mohan","age":18,"city":'salem',    "salary":100000},
    {"fname":"karth","age":17,"city":'sangari',  "salary":140000},
    {"fname":"selva","age":20,"city":'salem',    "salary":120000},
    {"fname":"bala", "age":25,"city":'anthivur', "salary":180000},
    {"fname":"jegan","age":16,"city":'salem',    "salary":190000},
 ]

print("Function sort :")
print("Index name based :")
users.sort(key=lambda a:a["fname"])
print("Sort users       :",users)
print("Index Age based :")
users.sort(key=lambda a:a['age'])
print("Sort users       :",users)
print("Index city based :")
users.sort(key=lambda a:a['city'])
print("Sort users       :",users)
print("Index salary based :")
users.sort(key=lambda a:["salary"])
print("Sort users       :",users)
print("=========================================================================")
print("Function sorted :")
print("Index name based :")
print("Sort users :",sorted(users,key= lambda a:a['fname']))
print("Index age based :")
print("Sort users :",sorted(users,key= lambda a:a['age']))
print("Index city based :")
print("Sort users :",sorted(users,key= lambda a:a['city']))
print("Index salary based :")
print("Sort users :",sorted(users,key= lambda a:["salary"]))

