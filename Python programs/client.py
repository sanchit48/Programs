import socket
s = socket.socket()
s.connect(("localhost",3500))
str = input("Say Something : ")
while str!="exit":
    s.send(str.encode())
    data=s.recv(1024)
    data=data.decode()
    print("Server : ",data)
    s1=input("Enter response : ")
    s.send(s1.encode())

s.close()
