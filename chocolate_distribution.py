# # Here n is the length of array and m in the numer of children in which we want to distribute the chocolate such that we can have minimum value when choloate is distributed among all the m children.
# # Note every children must get 1 chocolate pack only 
def partion(arr,l,r):
    pivot = arr[r]
    i = l-1

    for j in range(l,r):
        if arr[j] < pivot:
            i+=1
            arr[i],arr[j] = arr[j],arr[i]
    arr[i+1],arr[r] = arr[r],arr[i+1]
    return i+1

def sort(arr,l,h):
    if l < h :
        p = partion(arr,l,h)
        sort(arr,l,p-1)
        sort(arr,p+1,h)
    return arr


def chocolate_distribution(arr,n,m):
    l = 0
    h = n-1

    if m > n:
        return -1

    sort(arr,l,h)

    res = arr[m-1] - arr[0]

    i = 1
    while i+m-1 < n:
        res = min(res,arr[i+m-1]-arr[i])
        i+=1
    return res

print(chocolate_distribution([7,3,2,4,9,12,15],6,3))
# print(sort([10,80,30,90,40,50,70],0,6))
