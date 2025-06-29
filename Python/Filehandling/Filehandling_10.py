class VowelConst:
    def __init__(self, file):
        self.file = file

    def listword(self):
        vowel_words, const_words = [], []
        with open(self.file) as f:
            lines = f.readlines()
            for line in lines:
                for word in line.split():
                    if any(char.lower() in "aeiou" for char in word):
                        vowel_words.append(word)
                    elif any(char.lower() not in "aeiou" for char in word):
                        const_words.append(word)
        print("Words with vowels:", vowel_words)
        print("Words with only consonants:", const_words)


file = input("Enter the file name: ")
VowelConst(file).listword()
