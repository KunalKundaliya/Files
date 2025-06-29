import math


class Quadratic:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def find_roots(self):
        D = self.b**2 - 4 * self.a * self.c  # Discriminant
        if D == 0:
            x = -self.b / (2 * self.a)
            print("Roots are:", (x, x))
        elif D > 0:
            sqrt_D = math.sqrt(D)  # Calculate the square root of the discriminant
            x1 = (-self.b + sqrt_D) / (2 * self.a)
            x2 = (-self.b - sqrt_D) / (2 * self.a)
            print("Roots are:", (x1, x2))
        else:
            real_part = -self.b / (2 * self.a)
            imaginary_part = math.sqrt(-D) / (
                2 * self.a
            )  # Handle negative discriminant
            print(
                "Roots are:",
                f"{real_part} + {imaginary_part}i",
                ",",
                f"{real_part} - {imaginary_part}i",
            )


a = int(input("Enter value a: "))
b = int(input("Enter value b: "))
c = int(input("Enter value c: "))
Quadratic(a, b, c).find_roots()
