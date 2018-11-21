from collections import deque
d=deque()
choice=0
while choice<7:
    print("DEQUE OPERATIONS")
    print("1 Add Element")
    print("2 Remove Element At Front")
    print("3 Add Element At Rear")
    print("4 Remove Element At Rear")
    print("5 Remove Element In The Middle")
    print("6 Search For Element")
    print("7 Exit")

    choice=int(input("Enter No Of Choice : "))

    if choice==1:

        element=input("Enter Element : ")
        d.appendleft(element)

    elif choice==2:
        d.popleft()
        if element==-1:
            print("the queue is empty")
        else:
            print("removed element : ",element)

    elif choice==3:
        element=input("Enter An Element : ")
        d.append(element)

    elif choice==4:
        d.pop()

    elif choice==5:
        element=input("Enter An Element : ")

        try:
            d.remove(element)
        except ValueError:
            print("Element Not Found Asshole")

    elif choice==6:
        d.reverse()
    print("deque : ",end=" ")
    for i in d:
        print(i,end=" ")
    print()
