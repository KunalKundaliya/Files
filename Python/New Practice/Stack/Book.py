n = int(input("Enter size of stack: "))
stack = []


def push():
    if len(stack) < n:
        book = input("Enter the name of the book to add: ")
        stack.append(book)
    else:
        print("Stack is full")


def pop():
    if len(stack) != 0:
        removed_book = stack.pop()
        print(f"Removing book from stack: {removed_book}")
    else:
        print("Stack is empty")


def display():
    if len(stack) != 0:
        print("---- Books in stack ---")
        for book in stack:
            print(f"-{str(book).capitalize()}")
    else:
        print("Stack is empty")


dict1 = {1: push, 2: pop, 3: display}
flag = True

while flag:
    print("1. Push")
    print("2. Pop")
    print("3. Display")
    choice = int(input("Enter your choice: "))
    if choice in dict1:
        dict1[choice]()
    else:
        print("Invalid choice")
    flag = input("Do you want to end the program? (yes/no): ")
    if flag.lower() == "no":
        flag = True
    elif flag.lower() == "yes":
        flag = False
        break
else:
    print("Exiting the program")
