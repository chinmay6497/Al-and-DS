def move_zero(arr,n):
    count=0
    for i in range(n):
        if arr[i] !=0:
            arr[i],arr[count]=arr[count],arr[i]
            count+=1
    return arr

print(move_zero([1,2,0,0,0,4,6],7))

