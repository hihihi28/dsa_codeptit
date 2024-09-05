import math

class Fract:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    @staticmethod
    def tong(a, b):
        # Cộng hai phân số
        tu = a.tu * b.mau + a.mau * b.tu
        mau = a.mau * b.mau
        # Rút gọn phân số
        GCD = math.gcd(tu, mau)
        tu //= GCD
        mau //= GCD
        return "{}/{}".format(tu, mau)

a_tu, a_mau,b_tu, b_mau = list(map(int, input().split()))


a = Fract(a_tu, a_mau)
b = Fract(b_tu, b_mau)

A = Fract.tong(a, b)
print( A)
