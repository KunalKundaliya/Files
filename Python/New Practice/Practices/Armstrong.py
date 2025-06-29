class Armstrong:
    def __init__(self, num):
        self.num = num

    def checkarmstrong(self):
        sum = 0
        num = self.num
        while num > 0:
            digit = num % 10
            sum += digit**3
            num //= 10
        if sum == self.num:
            return f"{self.num} is an Armstrong num"


class RangeArmstrong(Armstrong):
    def __init__(self, start, end):
        self.start = start
        self.end = end

    def armstrongs(self):
        for i in range(self.start, self.end + 1):
            if Armstrong(i).checkarmstrong():
                print(i)


start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))
RangeArmstrong(start, end).armstrongs()
