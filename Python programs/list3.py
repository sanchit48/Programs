from numpy import*
T=int(input())
lst=[]
lst2=[]
for i in range(T):
    s=input()
    for i in range(len(s)):
        if s[i]!=".":
            c=i-int(s[i])
            d=i+int(s[i])
            lst.append([c,d])
        else:
            lst2.append(".")

for i in range(len(unique(lst2))):
    if s[i]==".":
        print("safe")

print(lst)
for x in lst:
    for y in lst:
        for i in range(len(lst)):
            if x!=y and y!=x and :
                print(x,y)
                if x[0]==y[0] or x[0]==y[1] or x[1]==y[0] or x[1]==y[1]:
                    print("unsafe")
                    break
                else:
                    print("safe")
                    break
            elif len(lst)==1:
                print("safe")
            else:
                pass
