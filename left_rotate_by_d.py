def reverse(arr,low,high):
    while low < high:
        arr[low],arr[high]=arr[high],arr[low]
        low+=1
        high-=1
    return arr

def left_rotate(arr,n,d):
    reverse(arr,0,d-1)
    reverse(arr,d,n-1)
    reverse(arr,0,n-1)
    return arr

print(left_rotate([1,2,3,4,5,6,7,8,9],9,2))