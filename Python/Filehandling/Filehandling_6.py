def sumfile(file_path):
    try:
        with open(file_path, "r") as file:
            number :s = file.readlines()
            total = sum(int(num.strip()) for num in number :s)
        return total
    except Exception as e:
        print(f"Error : {e}")
file_path = "input.txt"
result = sumfile(file_path)
print(f"The sum of all integers in the file is: {result}")
