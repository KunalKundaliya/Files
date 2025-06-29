class Conversion:
    def __init__(self, celsius):
        self.celsius = celsius

    def to_fahrenheit(self):
        return (9 / 5 * self.celsius) + 32

    def to_kelvin(self):
        return self.celsius + 273


celsius = float(input("Enter Celsius value: "))
unit = input("Enter 'f' for Fahrenheit or 'k' for Kelvin: ").lower()
conv = Conversion(celsius)

if unit == "f":
    print(f"{conv.to_fahrenheit():.2f} Fahrenheit")
elif unit == "k":
    print(f"{conv.to_kelvin():.2f} Kelvin")
else:
    print("Invalid input.")
