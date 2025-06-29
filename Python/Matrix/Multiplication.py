import Matrix as ms

m = int(input("Enter the number : of rows:"))
n = int(input("Enter the number : of columns:"))
obj = ms.Matrix(m, n)
print("Matrix 1:")
matrix1 = obj.matrix()
print("Matrix 2:")
matrix2 = obj.matrix()
result = obj.multiply(matrix1, matrix2)
for row in result:
    print(row)
