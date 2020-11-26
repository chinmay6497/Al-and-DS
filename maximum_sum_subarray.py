def max_sum(arr,n):
    max_ending=arr[0]
    res=arr[0]
    for i in range(1,n):
        max_ending=max(max_ending+arr[i],arr[i])
        res=max(res,max_ending)
    return res

print(max_sum([1,2,3,-2,5],5))