class Palindrome:
    @staticmethod
    def is_palindrome(s):
        s = s.lower().replace(" ", "")
        return s == s[::-1]


class RangePalindrome:
    @staticmethod
    def find_palindromes(start, end):
        palindromes = []
        for num in range(start, end + 1):
            if Palindrome.is_palindrome(str(num)):
                palindromes.append(num)
        for i in palindromes:
            print(i, end="\n")


start = int(input("Enter starting number :: "))
end = int(input("Enter ending number :: "))
RangePalindrome.find_palindromes(start, end)
