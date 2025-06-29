import Matrix as ms

m = int(input("Enter rows: "))
n = int(input("Enter columns: "))
matrixA = ms.Matrix(m, n).matrix()
print("Matrix A Entered:")
for row in matrixA:
    print(row)
transA = ms.Transpose(matrixA).transpose()
print("Transpose of matrix A:")
for row in transA:
    print(row)
