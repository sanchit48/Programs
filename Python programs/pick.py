import os
reclen = 20
f = open("cities","r+b")

size = os.path.getsize("cities")
print("Size Of The File Is : ",size)

record = int(size/reclen)
print("No Of Records Are : ",record)

city = input("Enter City Name : ")
city = city.encode()

newcity = input("Enter Renamed Name : ")
newcity = newcity + (reclen-len(newcity))*" "
newcity = newcity.encode()

position = 0

for i in range(1,record+1):
    found = False
    f.seek(position)
    str = f.read(20)
    if city in str:
        print("Found At Record : ",i)
        found = True
        f.seek(-20,1)
        f.write(newcity)
    position+=20






f.close()
