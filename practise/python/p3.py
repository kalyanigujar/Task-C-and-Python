# 3. Find the Largest of Three Numbers
a = int(input("Enter first number: "))  # Read first integer from user
b = int(input("Enter second number: "))  # Read second integer from user
c = int(input("Enter third number: "))  # Read third integer from user

if a > b and a > c:  # Check if 'a' is greater than both 'b' and 'c'
    print(a, "is the largest")  # Print result
elif b > c:  # Check if 'b' is greater than 'c'
    print(b, "is the largest")  # Print result
else:  # If neither 'a' nor 'b' is the largest, then 'c' must be the largest
    print(c, "is the largest")  # Print result
