# # MAP
# l = [1, 2, 3, 4, 5, 4]
# newl = list(map(lambda x: x**3, l))
# print(newl)
# # ---------------------
# # FILTER
# l = [1, 2, 3, 4, 5, 4]
# newnewl = list(filter(lambda x: x > 3, l))
# print(newnewl)
# # ---------------------
# # REDUCE
# from functools import reduce

# l = [1, 2, 3, 4, 5]
# sum = reduce(lambda x, y: x + y, l)
# print(sum)
# # ---------------------
# # Practice
# # 1.0


# class Apply:
#     def __init__(self, fx, values):
#         self.fx = fx
#         self.values = values

#     double = lambda x: x * 2
#     avg = lambda x, y: (x + y) / 2
#     cube = lambda x: x**3

#     def apply(self):
#         return 6 + self.fx(self.values)


# print(Apply.avg(5, 10))
# print(Apply.double(5))
# print(Apply.cube(5))
# print(Apply(Apply.double, 5).apply())

# # 2.0
# l = [1, 2, 3, 4, 5, 10, 15, 20, 0, 20]
# print(list(filter(lambda x: x % 5 == 0, l)))

# # 3.0
# sum = lambda a, b, c: a + b + c
# print(sum(1, 2, 3))

# # 4.0
# name = input("Enter your name :")
# marks = float(input("Enter your marks :"))
# phone_no = input("Enter Your phone number : :")
# print(
#     "My name is {} and marks he scored {}\nPhone no :{}".format(name, marks, phone_no)
# )

# # 5.0
# table = [str(7 * i) for i in range(1, 11)]
# print("\n".join(table))

# # 6.0
# div5 = [1, 2, 3, 4, 5, 20, 98, 95]
# newl = list(filter(lambda x: x % 5 == 0, div5))
# print(newl)

# # 7.0
# num = [1, 2, 3, 4, 5, 10, 15, 20, 0, 20]
# max_number : = reduce(lambda x, y: x if x > y else y, num)
# print("The maximum number : is:", max_number :)


# # 8.0
# num = [1, 2, 3, 4, 5, 10, 15, 20, 0, 20]
# for index, number :s in enumerate(num):
#     print(index)
#     print(number :s)
# # 9.0
# # nums = [1,2,3,4,5] which has value 3 or greater.
# nums = [1, 2, 3, 4, 5]
# num = [i for i in nums if i >= 3]
# print(num)

# example_set={1,2,3,4,5,6}
# dictionary={value:value*2 if value%2==0 else value*3 for value in example_set}
# print(dictionary)
