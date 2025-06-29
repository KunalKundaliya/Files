class VowelCount:
    def __init__(self, file):
        self.file = file

    def count_vowels(self):
        with open(self.file) as f:
            text, cin = f.readlines(), 0
            for lines in text:
                for words in lines.split():
                    for word in words:
                        if word.lower() in "aeiou":
                            cin += 1
            print(f"number : of vowels in the file {self.file} is {cin}")


file = input("Enter the file name: ")
VowelCount(file).count_vowels()
