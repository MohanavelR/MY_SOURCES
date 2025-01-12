import functools
nums=[1,2,3,4,5,6,7,8,9]
print("My Nums        : ",nums)
print("reduce sum     :",functools.reduce(lambda a,b:a+b,nums))
print("============================================")
nums=[1,2,3,4,5,6,7,8,9]
print("My Nums        : ",nums)
print("reduce sum     :",functools.reduce(lambda a,b:a+b,nums,100))
print("============================================")