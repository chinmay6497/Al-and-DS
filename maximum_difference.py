def max_diff(arr,n):
    res=arr[1]-arr[0]
    val_min=arr[0]
    
    for i in range(n):
        res=max(res,arr[i] - val_min) 
        val_min=min(arr[i],val_min)
    return res

print(max_diff([2,3,10,6,4,8,1],7))