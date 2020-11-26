# # This program is to find the second largest element in the array

def second_largest(arr):
    n=len(arr)
    res=-1
    largest=0
    for i in range(1,n):
        if arr[i]>arr[largest]:
            res=largest
            largest=i
        
        elif arr[i]!=arr[largest]:
            if res==-1 or arr[i]>arr[res]:
                res=i
    return res

print(second_largest([5,20,12,20,8]))
