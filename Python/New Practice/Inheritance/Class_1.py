class RailwayForm:
    formtype = "Railway Standard Form :"
    name='Kunal'
    station='Kvr Railway Station'
    def form(self, signature):
        print(f"{self.formtype}")
        print(f"Name: {self.name}")
        print(f"You have reached {self.station}\n{signature}")
class Employee(RailwayForm):
    salary = 2500
    increment = 0.10
    def salaryincrement(self):
        return self.salary + self.salary * self.increment
rail = RailwayForm()
rail.form("Signature !")
emp = Employee()
print('Current Salary is :',emp.salaryincrement())