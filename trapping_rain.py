def trapping_rain(arr,n):
    res=0
    lmax=[0]*n
    rmax=[0]*n

    lmax[0]=arr[0]
    for i in range(1,n):
        lmax[i]=max(arr[i],arr[i-1])

    rmax[0]=arr[n-1]
    for i in range(n-2,0,-1):
        rmax[i]=max(arr[i],arr[i+1])

    for i in range(n):
        res+=(min(lmax[i],rmax[i])-arr[i])
    return res

print(trapping_rain([5,0,6,2,3],5))