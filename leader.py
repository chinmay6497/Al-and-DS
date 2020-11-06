def leader(arr,n):
    current_lead = arr[n-1]
    print(current_lead,end=' ')
    for i in range(n-2,0,-1):
        if arr[i]>current_lead:
            current_lead=arr[i]
            print(current_lead,end=' ')

leader([7,10,4,10,6,5,2],7)