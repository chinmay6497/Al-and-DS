a=[2,3,2,3,5]
l=[]
# # for i in range(1,len(a)+1):
# #     l.append(a.count(i))

# # for i in range()
# i=1
# # while i < len(a):
# #     if i==a[i]

# for i in range(1,len(a)):
#     if i == 
# print(l)

# print(1%5)
n=len(a)
for i in range(len(a)):
    a[i]=a[i]-1
# print(a)
for i in range(len(a)):
    a[a[i]%n]= a[a[i]%n] +n
    # print(a[a[i]%n])+n
for i in range(n):
    print(a[i]//n,end=' ')
print(a)
# print(1%5)