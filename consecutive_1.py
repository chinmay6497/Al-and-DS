def consecutive(arr,n):
    res=0
    current=0
    for i in range(n):
        if arr[i]==0:
            current=0
            # break
        else:
            current+=1
            res=max(res,current)
    return res

print(consecutive([1,0,1,1,1,0,0,0,1,1,1,1,1,1],14))