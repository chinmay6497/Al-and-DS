def majority_element(arr,n):
    res=0
    count=1

    for i in range(1,n):
        if arr[res]==arr[i]:
            count+=1
        else:
            count-=1

        if count==0:
            res=i
            count=1
    # return res

    count=0

    for i in range(n):
        if arr[i]==arr[res]:
            count+=1

    if count < n//2:
        res=-1

    return res

print(majority_element([6,8,8,6,8,8],5))
