class Stack:
    def __init__(self):
        self.stack = []

    def push(self, item):
        self.stack.append(item)
        print(f"Pushed {item} onto the stack.")

    def pop(self):
        if self.stack:
            print(f"Popped {self.stack.pop()} from the stack.")
        else:
            print("Stack is empty!")

    def display(self):
        if self.stack:
            print("Stack contents:")
            for item in reversed(self.stack):
                print(item)
        else:
            print("Stack is empty!")


stack = Stack()
while True:
    choice = input("\n1. Push  2. Pop  3. Display  4. Exit\nEnter choice: ")
    if choice == "1":
        stack.push(input("Enter item: "))
    elif choice == "2":
        stack.pop()
    elif choice == "3":
        stack.display()
    elif choice == "4":
        break
    else:
        print("Invalid choice.")
