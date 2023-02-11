# Program: Sum of numbers in a list using recursion
def sum_numbers(numbers, total=0, i=0):
    if i == len(numbers):
        return total

    total += numbers[i]
    return sum_numbers(numbers, total, i + 1)


def main():
    numbers = [-1, 4, 6, -9, 1]
    result = sum_numbers(numbers)
    print("The sum of numbers is:", result)


if __name__ == '__main__':
    main()
