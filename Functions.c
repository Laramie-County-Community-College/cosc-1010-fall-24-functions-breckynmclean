def add(num1, num2):
    """Returns the sum of two numbers."""
    return num1 + num2

def subtract(num1, num2):
    """Returns the difference between two numbers."""
    return num1 - num2

def multiply(num1, num2):
    """Returns the product of two numbers."""
    return num1 * num2

def divide(num1, num2):
    """Returns the quotient of two numbers. Raises an error for division by zero."""
    if num2 == 0:
        return "Cannot divide by zero."
    return num1 / num2

def main():
    try:
        # User input for two numbers
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))

        # User input for operation choice
        print("Choose an operation:")
        print("1: Add")
        print("2: Subtract")
        print("3: Multiply")
        print("4: Divide")

        choice = int(input("Enter your choice (1-4): "))

        # Perform the chosen operation and display the result
        if choice == 1:
            result = add(num1, num2)
            print(f"The result of adding {num1} and {num2} is {result}.")
        elif choice == 2:
            result = subtract(num1, num2)
            print(f"The result of subtracting {num2} from {num1} is {result}.")
        elif choice == 3:
            result = multiply(num1, num2)
            print(f"The result of multiplying {num1} and {num2} is {result}.")
        elif choice == 4:
            result = divide(num1, num2)
            print(f"The result of dividing {num1} by {num2} is {result}.")
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")
    except ValueError:
        print("Invalid input. Please enter numeric values.")

# Call the main function to execute the program
if __name__ == "__main__":
    main()
