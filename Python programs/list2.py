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
            for x in lst:
                for y in lst:
                    if x!=y and y!=x and x>y:
                        print(x,y)
                        if x[0]==y[0] or x[0]==y[1] or x[1]==y[0] or x[1]==y[1]:
                            print("unsafe")
                            #break
                        else:
                            print("safe")
                        #    break
                    else:
                        pass

        else:
            lst2.append(".")
