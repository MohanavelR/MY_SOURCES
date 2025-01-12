a=[1,2,3,4]
try:

    print(a[10])

except IndexError as e:
    print("Total index is ",len(a),"can't possible....")
    print("Error :",e)