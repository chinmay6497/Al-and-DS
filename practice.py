def largestAndSecondLargest(sizeOfArray, arr):
    
    l=[]
    re=0
    for i in range(1,sizeOfArray):
        if arr[i] > arr[re]:
            re=i
    # b=
    l.append(arr[re])
    # return l

    res=-1
    for i in range(1,sizeOfArray):
        if arr[i] != arr[re]:
            if res==-1:
                res=i
            else:
                res=i
    
    if res==-1:
        l.append(-1)
    l.append(arr[res])

    return l

print(largestAndSecondLargest(5,[1,2,3,4,5]))