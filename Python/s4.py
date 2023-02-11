# Program: Check if an integer is a power of 2

def is_power_of_two(n):
    if n <= 0:
        return False
    else:
        i = 1
        while i % 2 != 0:
            if 2 ** i == n:
                return n
        return (n&(n-1)) == 1

num = 64
if is_power_of_two(num):
    print(num, "is a power of 2")
else:
    print(num, "is not a power of 2")
