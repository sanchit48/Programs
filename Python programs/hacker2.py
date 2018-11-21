from numpy import*
n=int(input())
a=[int(i) for i in input().split(" ")]
b=[int(i) for i in input().split(" ")]
p=0
q=0
lst=[]
for i in range(3):
    if a[i]>b[i]:
        p=p+1
    elif a[i]<b[i]:
        q=q+1
    else:
        pass

lst.append(p)
lst.append(q)
print(lst)
