class Anagram:
    def __init__(self, list):
        self.list = list

    def anagram(self):
        array = {}
        for i in self.list:
            sorted_word = "".join(sorted(i))
            if sorted_word in array:
                array[sorted_word].append(i)
            else:
                array[sorted_word] = [i]
        return array


lists=["eat","tea","tan","ate","nat","bat"]
print(Anagram(lists).anagram())
