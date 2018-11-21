from array import*
from numpy import*
arr=[]
n=int(input())

for i in range(n):
    arr.append(int(input()))

#p=matrix(arr)
arr1=reshape(arr,(2,2))  #use this replace not .replace

print(arr1)
print(diagonal(arr1))
