nums=[2,3,4,6,7,9]
print("My Nums         : ",nums)
print("Map list square :",list(map(lambda a:a**2,nums)))
print("============================================")
users=[
    {"fname":"Mohan","age":18,"city":'salem',    "salary":100000},
    {"fname":"karth","age":17,"city":'sangari',  "salary":140000},
    {"fname":"selva","age":20,"city":'salem',    "salary":120000},
    {"fname":"bala", "age":25,"city":'anthivur', "salary":180000},
    {"fname":"jegan","age":16,"city":'salem',    "salary":190000},
 ]
print("users          :",users)
print("Users Name List :",list(map(lambda a:a['fname'],users)))
print("Users age+1 List:",list(map(lambda a:{**a,"age":a['age']+1},users)))
