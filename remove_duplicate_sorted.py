def remove_duplicate(arr,n):
    res=1
    for i in range(1,n):
        if arr[i]!= arr[res-1]:
            arr[res]=arr[i]
            res+=1
    return arr

print(remove_duplicate([1,2,2,3,3,3,4,5],8))