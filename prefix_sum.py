def prefic_sum(arr,n,l,r):
    sm_ar = [0]*n
    sm_ar[0] = arr[0]

    for i in range(1,n):
        sm_ar[i] = sm_ar[i-1] + arr[i]

    if l != 0:
        return sm_ar[r] - sm_ar[l-1]

    else:
        return sm_ar[r]
    # sm=0
    # while l  != r:
    #     sm += arr[l]
    #     l+=1
    # return sm
print(prefic_sum([2,8,7,9,6,5,4],7,1,4))