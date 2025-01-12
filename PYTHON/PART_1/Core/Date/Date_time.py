import datetime as dt

custom_date_time=dt.datetime(2003,3,24,12,33,23,300000)
print("Custom date and Time           :",custom_date_time)
print("Custom date and Time(year)     :",custom_date_time.year)
print("Custom date and Time(month)    :",custom_date_time.month)
print("Custom date and Time(day)      :",custom_date_time.day)
print("Custom date and Time(hour)     :",custom_date_time.hour)
print("Custom date and Time(min)      :",custom_date_time.minute)
print("Custom date and Time(sec)      :",custom_date_time.second)
print("Custom date and Time(microsec) :",custom_date_time.microsecond)
diffirence=dt.datetime.today()-custom_date_time
print("Diffirence :",diffirence)