# Time complexity over here is O(n)

# def largest(arr):
#     result=0
#     for i in range(1,len(arr)):
#         if arr[i]>arr[result]:
#             result=i
#     return result

def largest(arr):
    for i in range(0,len(arr)):
        if i>i+1:
            break
    return i

print(largest([2,5,8,5]))