while True:
    print("Choose a program")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")
    Choice = int(input("Enter your choice : "))

    if Choice == 5:
        print("Thank you for using the RAISYA calculator")
        break
    elif Choice >= 1 and Choice <= 4:
        a = float(input("Enter the first value : "))
        b = float(input("Enter the second value : "))
        
        if Choice == 1:
            print(f"The result of the addition of {a:.2f} and {b:.2f} is {a + b:.2f}")
        elif Choice == 2:
            print(f"The result of the subtraction of {a:.2f} and {b:.2f} is {a - b:.2f}")
        elif Choice == 3: 
            print(f"The result of the multiplication of {a:.2f} and {b:.2f} is {a * b:.2f}")
        else:
            print(f"The result of the division of {a:.2f} and {b:.2f} is {a / b:.2f}")
    else:
        print("Your input is invalid, please try again")