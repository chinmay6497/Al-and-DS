def stock(arr,n):
    profit=0
    for i in range(1,n):
        if arr[i] > arr[i-1]:
            profit+=arr[i] - arr[i-1]
    return profit

print(stock([1,5,3,8,12],5))