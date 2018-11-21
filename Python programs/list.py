from numpy import*
T=int(input())
for i in range(T):
    n,k=[int(i) for i in input().split(" ")]
    a=[int(i) for i in input().split(" ")]

    for i in range(n):
        def loop():
            a.sort()
            if min(a)>k:
                a[i]=a[i]-1
                a[i+1]=a[i+1]-1
                #sum(a)
                print(sum(a))
                if min(a)>k:
                    loop()
                else:
                    pass
            else:
                sum=a[i]+a[i+1]
                print(sum)
                loop()
