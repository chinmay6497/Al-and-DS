def sliding_win(arr,n,k):
    current_sum = 0
    for i in range(k):
        current_sum += arr[i]

    max_sum = current_sum

    for i in range(k,n):
        current_sum += (arr[i] - arr[i-k])
        max_sum = max(max_sum,current_sum)

    return max_sum

print(sliding_win([1,8,30,-5,20,7],6,3))
    