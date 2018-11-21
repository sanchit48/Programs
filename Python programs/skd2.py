from numpy import*
from array import*
T=int(input())
lst=[]
for i in range(2):
    ele=[int(i) for i in input().split(" ")]
    lst.append(ele)
#lst=reshape(lst,(3,3))
print(lst)
for i in range(3):
    for j in range(3):
        lst[i][j] =



n=int(input())
if n==2:
    print("prime")
elif n%2==0:
    print("not prime")
else:
    print("prime")

t=int(input())
count=0
for i in range(t):
	if t[0][i]<t[0][i+1]:
		count+=1
		t[0][i+1]=t[0][i]
	elif t[i][0]<t[i+1][0]:
	        count+=1
	        t[i][0]=t[i+1][0]
print(count)
"""
primes = [3,5,7,11,13,17]
swap_index = [[0,1],[0,3],[1,2],[1,4],[2,5],[3,4],[3,6],[4,5],[4,7],[5,8],[6,7],[7,8]]

def swap_elem(int1,a,b):
    str1 = str(int1)
    str2 = str1[:a] + str1[b] + str1[a+1:b] + str1[a] + str1[b+1:]
    return int(str2)

def swapable(int1):
    lst_swapable = []
    str1 = str(int1)
    for k in swap_index:
        if primes.count(int(str1[k[0]]) + int(str1[k[1]])) == 1:
            lst_swapable.append(k)
    return lst_swapable

home = 123456789
places_visited = {home:0}
current_places = [home]
move = 0
while len(current_places) != 0:
    move += 1
    dup = []
    for elem in current_places:
        lst1 = swapable(elem)
        for k in lst1:
            h = swap_elem(elem,k[0],k[1])
            if h not in places_visited.keys():
                dup.append(h)
                places_visited[h] = move
    current_places = dup[:]


test_case = int(input())
for k in range(test_case):
    input()
    str1 = input()
    str2 = input()
    str3 = input()
    puzzle = int(str1[0] + str1[2] + str1[4] + str2[0] + str2[2] + str2[4] + str3[0] + str3[2] + str3[4])
    if puzzle in places_visited.keys():
        print(places_visited[puzzle])
    else:
        print(-1)
