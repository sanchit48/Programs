from array import*
arr=array('i',[])
print("how many elements :")
n=int(input())
#print(n)

for i in range(n):
    print("Enter elements:")
    arr.append(int(input()))

print("original array :",arr)

#flag = False
for i in range(n-1):
    for j in range(n-1-i):
        if arr[j]>arr[j+1]:
            t=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=t
            
            #flag=True
    #if flag==False:
        #break
    else:
        pass
            #flag = False


print("sorted arrays : ",arr)
