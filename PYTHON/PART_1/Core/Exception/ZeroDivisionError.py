try:
    # a=10/3
    a=10/0

except ZeroDivisionError as e:
    print("10 divited by 0 is not Possible")
    print("Error :",e)