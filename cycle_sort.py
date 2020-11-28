def cycle_sort(arr):
    n = len(arr)

    for i in range(n):
        item = arr[i]
        pos = i
        for j in range(i+1,n):
            if arr[j] < item:
                pos +=1
        arr[pos],item = item,arr[pos]
        while pos != i:
            pos = i
            for j in range(i+1,n):
                if arr[j] < item:
                    pos +=1
            item,arr[pos] = arr[pos],item
    return arr

print(cycle_sort([20,40,50,10,30]))