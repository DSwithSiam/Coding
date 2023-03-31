# Read the input
n = int(input())

# Initialize the first two rows of Pascal's triangle
prev_row = [1]
curr_row = [1, 1]

# Compute the remaining rows of Pascal's triangle
for i in range(2, n+1):
    # Compute the current row of Pascal's triangle
    curr_row = [1] + [prev_row[j] + prev_row[j+1] for j in range(len(prev_row)-1)] + [1]
    # Set the current row as the previous row for the next iteration
    prev_row = curr_row

# Print the sum of the nth row of Pascal's triangle
print(sum(curr_row))