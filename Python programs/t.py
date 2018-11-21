str=input("Enter A Fucking String : ")
sub=input("Enter A Fucking Repeated Substring : ")

i=0
while i<len(str):
    n=str.find(sub,i,len(str))
    if n!=-1:
        print(n+1)
        i=n+1
    else :
        pass
        i+=1
