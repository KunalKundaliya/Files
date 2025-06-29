import time


class Employee:
    company1 = "Google"

    def __init__(self, salary):
        self.salary = salary

    def time(self):
        current_time = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())
        print(f"Current date and time is {current_time}\nSalary : {self.salary}")


Emp = Employee(1000)
Emp.time()
