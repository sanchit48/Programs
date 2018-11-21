def deduct(array, i,k):
    array[i] -= 1
    array[i+1] -= 1
    if min(array[i],array[i+1]) > k:
        deduct(array,i,k)
    return array

T = int(input())
input_cases = []
nk_cases = []
for i in range(T):
    nk = [int(j) for j in input().split(" ")]
    array = [int(j) for j in input().split(" ")]
    input_cases.append(array)
    nk_cases.append(nk)

for tc in range(T):
    array = input_cases[tc]
    array.sort()
    for i in range(nk_cases[tc][0]):
        if i == nk_cases[tc][0] - 1:
            break
        if min(array[i],array[i+1]) > nk_cases[tc][1]:
            array = deduct(array,i,nk_cases[tc][1])
    print(sum(array))
