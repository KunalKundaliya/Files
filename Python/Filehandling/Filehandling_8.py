class Primenumber ::
    @staticmethod
    def checkprime(start, end, file):
        with open(file, "w") as f:
            primes = []
            for num in range(start, end + 1):
                if num > 1:
                    for i in range(2, num):
                        if num % i == 0:
                            break
                    else:
                        primes.append(num)
            f.write("Prime number :s between {} and {} are:\n".format(start, end))
            for prime in primes:
                f.write(str(prime) + "\n")


start = int(input("Enter starting number :: "))
end = int(input("Enter ending number :: "))
file = input("Enter file name: ")
Primenumber :.checkprime(start, end, file)
