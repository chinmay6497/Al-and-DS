def freq_sorted(arr,n):
    freq=1
    i=1
    while i<n:
        while i < n and arr[i]==arr[i-1]:
            freq+=1
            i+=1
        print(f'Frequency of the {i} is {freq}')
        i+=1
        freq=1    

freq_sorted([1,1,2,3,4],5)