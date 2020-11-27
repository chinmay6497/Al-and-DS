def count_merge(arr,l,m,r):
    n1 = m-l+1
    n2 = r - m

    left = [0]*n1
    right = [0]*n2

    for i in range(n1):
        left[i] = arr[l+i]

    for j in range(n2):
        right[j] = arr[m+1+j]

    i = 0
    j = 0
    k = l
    res = 0

    while i < n1 and j < n2:
        if left[i] < right[j]:
            arr[k] = left[i]
            i+=1
            k+=1

        else:
            arr[k] = right[j]
            j+=1
            k+=1
            res = res + (n1 - i)

    while i < n1:
        arr[k] = left[i]
        i+=1
        k+=1

    while j < n2:
        arr[k] = right[j]
        j+=1
        k+=1
    return res

def count_inversion(arr,l,r):
    res1 = 0
    if r > l:
        m = (l + r)//2
        res1 += count_inversion(arr,l,m)
        res1 += count_inversion(arr,m+1,r)
        res1 += count_merge(arr,l,m,r)

    return res1

print(count_inversion([2,4,1,3,5],0,4))