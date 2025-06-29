from functools import reduce


class Marksheet:
    def __init__(self, mark):
        self.mark = mark

    def marks(self):
        total_marks = reduce(lambda x, y: x + y, self.mark)
        print(f"Percentage of marks is {total_marks/len(self.mark)}")


marks1 = list(map(int, input("Enter marks: ").split()))
Marksheet(marks1).marks()
