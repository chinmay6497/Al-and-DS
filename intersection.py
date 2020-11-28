def sorted_intersection(arr1,arr2):
    n = len(arr1)
    m = len(arr2)

    i = 0
    j = 0
    
    while i < n and j < m:
        if i > 0 and arr1[i] == arr1[i-1]:
            i+=1
            continue

        if arr1[i] < arr2[j]:
            i+=1
        
        elif arr1[i] > arr2[j]:
            j+=1
        
        else:
            print(arr1[i],end=' ')
            i+=1
            j+=1

sorted_intersection([1,3,4,5,6,7,9],[1,5,9])