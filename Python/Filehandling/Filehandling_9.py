import string


class Alphabet:
    def __init__(self, file):
        self.file = file

    def alphabetaz(self):
        with open(self.file, "a+") as f:
            f.write(string.ascii_uppercase + "\n" + string.ascii_lowercase + "\n")


files = input("Enter Filename :")
Alphabet(files).alphabetaz()
