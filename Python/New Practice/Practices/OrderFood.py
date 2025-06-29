class Menu:
    def __init__(self):
        self.menu = {
            "morning": {"Pancakes": 5.99, "Omelette": 6.99, "Coffee": 2.99},
            "appetizer": {"Spring Rolls": 4.99, "Garlic Bread": 3.99, "Nachos": 5.49},
            "lunch": {"Burger": 8.99, "Salad": 7.99, "Pizza": 9.99},
            "dinner": {"Steak": 14.99, "Pasta": 12.99, "Grilled Chicken": 13.99},
            "dessert": {"Ice Cream": 3.99, "Cake": 4.99, "Brownie": 5.49},
        }

    def display_menu(self):
        print("--- Menu: ---")
        for category, items in self.menu.items():
            print(f"\n{category.capitalize()}:")
            for item, price in items.items():
                print(f"  {item}: ${price:.2f}")


class Order:
    def __init__(self, menu):
        self.menu = menu
        self.order = {}

    def add_to_order(self, category, item):
        if category in self.menu.menu and item in self.menu.menu[category]:
            price = self.menu.menu[category][item]
            self.order[item] = price
            print(f"Added {item} to your order for ${price:.2f}.")
        else:
            print("Invalid category or item")

    def display_order(self):
        if not self.order:
            print("Your order is empty.")
        else:
            print("\nYour Order:")
            total = 0
            for item, price in self.order.items():
                print(f"-{item}: ${price:.3f}")
                total += price
            print(f"Total: ${total:.2f}")


def main():
    menu = Menu()
    order = Order(menu)

    while True:
        print("\n1. View Menu")
        print("2. Add to Order")
        print("3. View Order")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            menu.display_menu()
        elif choice == "2":
            category = input(
                "Enter category (morning, appetizer, lunch, dinner, dessert): "
            ).lower()
            item = input("Enter the name of the item: ")
            order.add_to_order(category, item)
        elif choice == "3":
            order.display_order()
        elif choice == "4":
            print("Thank you for ordering. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
