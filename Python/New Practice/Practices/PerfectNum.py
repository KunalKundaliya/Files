class PerfectNum:
    @staticmethod
    def perfectnum(start, end):
        for num in range(start, end + 1):
            sums = sum(i for i in range(1, num) if num % i == 0)
            if sums == num:
                print(num, end="\n")


start = int(input("Enter starting number :: "))
end = int(input("Enter ending number :: "))
PerfectNum.perfectnum(start, end)
