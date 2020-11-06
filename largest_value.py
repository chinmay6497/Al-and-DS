def largest_value(arr):
    for i in range(0,len(arr)):
        if i>i+1:
            break
    return arr[i]

print(largest_value([1,4,8,9]))


# arr=[1,2,3,4,5,6]
# print(max(arr))