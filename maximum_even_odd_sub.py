def maximum_even_odd(arr,n):
    count=1
    res=1
    for i in range(1,n):
        if (arr[i-1]%2 !=0 and arr[i]%2 ==0) or (arr[i-1] %2 ==0 and arr[i]%2 !=0):
            count+=1
            res=max(res,count)
        else:
            count=1
    
    return res

print(maximum_even_odd([5,10,20,6,3,8],6))