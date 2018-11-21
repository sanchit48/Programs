from numpy import*
x=[]
n=int(input("How Many Numbers : "))

for i in range(n):
    x.append(int(input()))

x.sort
print(x)
#int(input("Enter Element Of Which You Want To Find Repetition :"))
flag=x[0]
for i in range(1,n):
    if x[i]==flag:
        flag=x[i]
        p=i+1
    else:
        flag=x[i+1]

print(p)
