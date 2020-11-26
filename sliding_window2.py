# This is used to find out whether the sum is present in the array or not

def sum_arr(arr,n,sm):
    s=0
    e=1
    sum_an=0
    sum_an += arr[0]

    for i in range(1,n):

        while sum_an > sm and s < n-1:
            sum_an -= arr[s]    
            s+=1
        if sm == sum_an:
            return True

        elif sum_an < sm:
            sum_an += arr[i] 
    return False

print(sum_arr([1,4,20,3,10,5],6,33))
        