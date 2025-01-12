import datetime as dt

current_datetime=dt.datetime.now()
print("Current datetime:",current_datetime)
format_date=current_datetime.strftime("%A %B %d %Y %b")
print("%Y :year,%A:Full dayname,%B:Month fullname %d:day %b:shortname month")
print("Format Date :",format_date)