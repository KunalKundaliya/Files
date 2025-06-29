class Factorial:
    def __init__(self, num):
        self.num = num

    def calculate(self):
        if self.num < 0:
            return "Undefined for negative number :s"
        elif self.num == 0 or self.num == 1:
            return 1
        else:
            return self.num * Factorial(self.num - 1).calculate()


num = int(input("Enter a number :: "))
fact = Factorial(num).calculate()
print(f"The factorial of {num} is: {fact}")
