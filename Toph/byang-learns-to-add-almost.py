# Read the input integers
a, b = map(int, input().split())

# Initialize the carry flag and the carry count
has_carry = False
carry_count = 0

# Loop until both numbers have been processed
while a > 0 or b > 0:
    # Compute the sum of the current digits and the carry
    s = (a % 10) + (b % 10) + has_carry
    # Check if there is a carry
    if s >= 10:
        has_carry = True
        carry_count += 1
    else:
        has_carry = False
    # Remove the last digit from each number
    a //= 10
    b //= 10

# Print the output
if carry_count > 0:
    print("Yes")
else:
    print("No")