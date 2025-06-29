import math


class Banking:
    def __init__(self, r, theta, mu):
        self.r, self.theta, self.mu = r, math.radians(theta), mu

    def calculate_speeds(self):
        g = 9.81
        tantheta, mu = math.tan(self.theta), self.mu
        v_max = math.sqrt(self.r * g * (tantheta + mu) / (1 - mu * tantheta))
        v_min = math.sqrt(self.r * g * (tantheta - mu) / (1 + mu * tantheta))
        return v_max, v_min


r = float(input("Radius (m): "))
theta = float(input("Banking angle (°): "))
mu = float(input("Friction coefficient: "))
v_max, v_min = Banking(r, theta, mu).calculate_speeds()
print(f"Max speed: {v_max:.2f} m/s, Min speed: {v_min:.2f} m/s")
