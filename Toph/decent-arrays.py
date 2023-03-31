# Read the input
n = int(input())
numbers = list(map(int, input().split()))

# Check if the numbers are in ascending order
is_ascending = True
for i in range(1, n):
    if numbers[i] < numbers[i-1]:
        is_ascending = False
        break

# Print the output
if is_ascending:
    print("Yes")
else:
    print("No")