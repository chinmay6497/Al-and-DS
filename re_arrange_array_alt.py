#User function Template for python3

##Complete this function
def rearrange(arr, n): 
    ##Your code here
    max_index=n-1
    min_index=0
    
    max_ele=arr[n-1] + 1
    
    for i in range(0,n):
        if i % 2 ==0:
            arr[i] += (arr[max_index] % max_ele) * max_ele
            max_index-=1
        else:
            arr[i] += (arr[min_index] % max_ele) * max_ele
            min_index+=1
            
    for i in range(n):
        arr[i]=arr[i]//max_ele
        
    return arr


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math




def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            rearrange(arr,n)
            
            for i in arr:
                print(i,end=" ")
            
            print()
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends