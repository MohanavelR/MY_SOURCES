names=(("Mohan",34,'salem'),("Jegan",21,'Erode'),("Karthi",23,'sangiri'))
print("Tuple is doesn't use sort")
print("=========================================================================")
print("Function sorted :")
print("Index 0 based :")
print("My List Names is :",names)
print("Sort Names :",tuple(sorted(names,key= lambda a:a[0])))
print("Index 1 based :")
print("My List Names is :",names)
print("Sort Names :",tuple(sorted(names,key= lambda a:a[1])))
print("Index 2 based :")
print("My List Names is :",names)
print("Sort Names :",tuple(sorted(names,key= lambda a:a[2])))