def normal_sub(arr,n):
    max_ending=arr[0]
    res=arr[0]
    for i in range(1,n):
        max_ending=max(max_ending+arr[i],arr[i])
        res=max(res,max_ending)
    return res

def over_all_sum(arr,n):
    max_normal=normal_sub(arr,n)

    if max_normal < 1:
        return max_normal

    arr_sum=0

    for i in range(n):
        arr_sum+=arr[i]
        arr[i] = -arr[i]

        max_circular= arr_sum + normal_sub(arr,n)
    return max(max_circular,max_normal)

print(over_all_sum([8,-4,3,-5,4],5))