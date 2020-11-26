#User function Template for python3

#Complete this function
def maxIndexDiff(arr, n): 
    ##Your code here
    # res=arr[1] - arr[0]
    lmax=[0 for i in range(n)]
    lmax[0] = arr[0]
    
    for i in range(1,n):
        lmax[i] = min(arr[i],lmax[i-1])
        
    rmax=[0 for i in range (n)]
    rmax[n-1]= arr[n-1]
    
    for i in range(n-2,-1,-1):
        rmax[i]= max(arr[i],rmax[i+1])
        
    i=0
    j=0
    max_diff=-1
    
    while i < n and j < n:
        if lmax[i] <=rmax[j]:
            max_diff=max(max_diff,j-i)
            j+=1
        else:
            i+=1
    return max_diff
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math

def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            print(maxIndexDiff(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends