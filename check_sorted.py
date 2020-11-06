# Time complexity here is O(n) and auxilary space is O(1)
def check_sorted(arr):
    n=len(arr)
    for i in range(0,n):
        if arr[i]>arr[i-1]:
            return False
        return True

print(check_sorted([8,12,15]))