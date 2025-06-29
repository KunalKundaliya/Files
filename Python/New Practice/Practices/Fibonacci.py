class Fibonacci:
    def __init__(self, end):
        self.end = end

    def generate_sequence(self):
        a, b = 0, 1
        print("Fibonacci sequence in range:")
        for i in range(self.end):
            print(a, end="\n")
            a, b = b, a + b


end = int(input("Enter the Fibonacci sequence length: "))
Fibonacci(end).generate_sequence()
