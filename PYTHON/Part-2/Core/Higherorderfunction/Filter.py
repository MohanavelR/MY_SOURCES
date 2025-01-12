nums=[1,2,3,4,5,6,7,8,9]
print("My Nums           : ",nums)
print("Filter list Even  :",list(filter(lambda a:a%2==0,nums)))
print("============================================")
users=[
    {"fname":"Mohan","age":18,"city":'salem',    "salary":100000},
    {"fname":"karth","age":17,"city":'sangari',  "salary":140000},
    {"fname":"selva","age":20,"city":'salem',    "salary":120000},
    {"fname":"bala", "age":25,"city":'anthivur', "salary":180000},
    {"fname":"jegan","age":16,"city":'salem',    "salary":190000},
 ]
print("users          :",users)
print("Users age>18 List:",list(filter(lambda a:a['age']>18,users)))