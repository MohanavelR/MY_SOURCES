import datetime as dt

custom_time=dt.time(minute=33,second=20,hour=2,microsecond=300000)
print("Custom time     :",custom_time)
print("Custom min      :",custom_time.minute)
print("Custom sec      :",custom_time.second)
print("Custom hour     :",custom_time.hour)
print("Custom microsec :",custom_time.microsecond)