from functools import reduce


class IntersectionSuM:
    def __init__(self, list1, list2):
        self.list1 = list1
        self.list2 = list2

    def intersection(self):
        return reduce(
            lambda x, y: x + y, list(filter(lambda x: x in self.list1, self.list2))
        )


list1 = [1, 2, 3, 6, 6]
list2 = [1, 2, 3, 4, 5]
common_Sum_Matrix = IntersectionSuM(list1, list2).intersection()
print("Sum of common values:", common_Sum_Matrix)
