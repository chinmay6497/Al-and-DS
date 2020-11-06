def frequencycount(A,N):
    # code here
    # l=[]
    # for i in range(1,len(A)+1):
    #     l.append(A.count(i))
    # return l
    l=[]
    
    for i in range(N):
        A[i]=A[i]-1
        
    for i in range(N):
        A[A[i]%N] = A[A[i]%N] +N
        
    for i in range(N):
        A[i] = A[i]//N
    return A 




#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
if __name__=="__main__":
	T=int(input())
	while(T>0):
		N=int(input())
		A=[int(x) for x in input().strip().split()]
		frequencycount(A,N)
		for i in range (len (A)):
			print(A[i], end=" ")
		print()
		T-=1



# } Driver Code Ends