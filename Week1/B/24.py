import datetime
dt = input();
day, month, year = (int(x) for x in dt.split('/'))    
ans = datetime.date(year, month, day)
print (ans.strftime("%A")