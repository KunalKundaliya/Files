class Person:
    company='Amazon'
    code='1234'
class Programmer(Person):
    code='456'
    def show(self):
        print(f"You had been promoted to {self.company}")
class Employee(Programmer):
    def showrun(self):
        super().show()
        print("Code is ",super().code)
pr=Programmer()
p=Person()
e=Employee()
e.showrun()