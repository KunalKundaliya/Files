class Prime:
    @staticmethod
    def primes(start, end):
        primes = []
        for num in range(start, end + 1):
            for i in range(2, num):
                if num % i == 0:
                    break
            else:
                primes.append(num)
        for i in primes:
            print(i, end="\n")


start = int(input("Enter the starting number :: "))
end = int(input("Enter the ending number :: "))
Prime.primes(start, end)
