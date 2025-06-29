class TwoDVector:
    def __init__(self, i, j):
        self.i = i
        self.j = j

    def __str__(self):
        return f"{self.i}i+{self.j}j"


class ThreeDVector(TwoDVector):
    def __init__(self, i, j, k):
        super().__init__(i, j)
        self.k = k

    def __str__(self):
        return f"{self.i}i+{self.j}j+{self.k}k"


x = int(input("Enter x :"))
y = int(input("Enter y:"))
z = int(input("Enter z:"))
v1 = TwoDVector(x, y)
v2 = ThreeDVector(x, y, z)
print(v1)
print(v2)
