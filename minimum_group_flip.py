def min_grp_flp(arr,n):
    for i in range(1,n):
        if arr[i] != arr[i-1]:
            if arr[i] != arr[0]:
               print(f'From {i} to', end=' ')
            else:
                print(i-1) 

    if arr[n-1] != arr[0]:
        print(n-1)

min_grp_flp([0,0,1,1,0,0,1,1,0,1],10)