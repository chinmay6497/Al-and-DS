mat = [[1,2,3],[4,5,6],[7,8,9]]
n = len(mat)
sum = 0
# for i in range(1):
#     for j in range(n):
#         sum += mat[0][j]

# for j in range(n):
#     sum += mat[n//2][j]    
# print(sum)

for i in range(n):
    sum += mat[0][i] + mat[n//2][i]
print(sum - mat[0][n//2])

# print(mat[0][n//2])