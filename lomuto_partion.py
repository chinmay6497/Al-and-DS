# Time complexity is O(n) and space complexity is O(1)

def lomuto_partion(arr,l,h):
    pivot = arr[h]
    i = l-1

    for j in range(l,h-1):
        if arr[j] < pivot:
            i+=1
            arr[i],arr[j] = arr[j],arr[i]

    arr[i+1],arr[h] = arr[h],arr[i+1]
    return i+1

arr = [10,30,80,90,40,50,70]
l = 0
h = 6

lomuto_partion(arr,l,h)

