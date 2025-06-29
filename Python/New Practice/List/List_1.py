class TwoSum:
    def __init__(self, list1, target):
        self.list1 = list1
        self.target = target

    def cursor_postion(self):
        indices = [
            [i,j]
            for i in range(len(self.list1))
            for j in range(i + 1, len(self.list1))
            if self.list1[i] + self.list1[j] == self.target
        ]
        return list(map(lambda x: x, indices))


list1 = [1, 2, 4, 5, 11]
target = 6
obj = TwoSum(list1, target)
print(f"Indexing Value for the Sum_Matrix {target} is ", obj.cursor_postion())
