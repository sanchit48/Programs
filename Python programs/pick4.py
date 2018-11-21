lst = []

lst.append("Tony")
lst.append("Is")
lst.append("Best")

print(lst)
choice = int(input("Your Fucking Choice : "))

if choice==1:

    position = int(input("Enter Position : "))
    element = input("Enter Element To Insert : ")
    lst.insert(position,element)
    print(lst)

if choice==2:

    remove = input("Element To Remove : ")
    lst.remove(remove)
    position = int(input("Enter Position : "))
    element = input("Enter Element To Insert : ")
    lst = lst.insert(position,element)
    print(lst)

if choice==3:

    element = input("Enter Element To Find Its Position : ")
    lst = lst.index(element)
    print(lst)
