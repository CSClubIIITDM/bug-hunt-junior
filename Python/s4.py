# Program: Check if an integer is a power of 2

def is_power_of_two(n):
    if n < 0 or n % 2 != 0:
        return False
    else:
        n = n / 2
        if n < 1:
            return False
        elif n == 1:
            return True
        else:
            is_power_of_two(n)
    #return (n & (n-1)) == 1


num = 64
if is_power_of_two(num):
    print(num, "is a power of 2")
else:
    print(num, "is not a power of 2")
