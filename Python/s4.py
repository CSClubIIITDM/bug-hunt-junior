# Program: Check if an integer is a power of 2

def is_power_of_two(n):
    if n%2!=0:
        return False
    else:
        if n==2:
            return True
        return is_power_of_two(n//2)


num = 69
if is_power_of_two(num):
    print(num, "is a power of 2")
else:
    print(num, "is not a power of 2")
