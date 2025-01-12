rate={'apple_phone':1000000,'nokia ':10000,'vivo':100000,'oppo':100000}
update_rate={ key:val-1 for key,val in rate.items()}
print("Rate        :",rate)
print("Update Rate :",update_rate)
high_rate={key:val for key,val in rate.items() if val>=100000 }
print("High rate   :",high_rate)
stack={'apple':1,'orange':0,'banana':0}
Available_stack={ key:'Available' if val>0 else 'No Stack' for (key,val) in stack.items() }
print("Available stack :",Available_stack)