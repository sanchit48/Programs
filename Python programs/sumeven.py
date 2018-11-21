import sys
arg=sys.argv[1:]
print("list is :",arg)
sum=0
for i in arg:
    a=int(i)      #for loop k liye we use 1 tab now for if we can't use 1 tab we have to use two or more so that aisa na lge ki vo(if k andr wala part) loop ka part hai
    if a%2==0:
            print("even numbers are :",a)
            sum=sum+a
print("sum of even numbers is :",sum)
