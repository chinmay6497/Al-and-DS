#User function Template for python3

##Complete this function

def missingNumber(arr,n):
    a=max(arr)
    
    if a<0:
        return 1
        
    if n==1:
        return 2 if arr[0]==1 else 1
        
    l=[0]*a
    
    for i in range(n):
        if arr[i] > 0:
            if l[arr[i]-1] != 1:
                l[arr[i]-1] =1

    for i in range(len(l)):
        if l[i] == 0:
            return i+1
    return i+2
    
#{ 
#  Driver Code Starts
#Initial Template for Python 3


import math


def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            print(missingNumber(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends