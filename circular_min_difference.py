a=[8,-8,9,-9,10,-11,12]
n=len(a)
res=0
l=[]
l[0]=a[0]
for i in range(2,n):
    l[i]=abs(a[i]-a[res])
    res=i

print(l)

# print(abs(-8))