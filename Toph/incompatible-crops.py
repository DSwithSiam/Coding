# Read the dimensions of the field
r, c = map(int, input().split())

# Read the layout of the field
field = []
for i in range(r):
    row = input().strip()
    field.append(row)

# Check each free spot for safety
safe_spots = 0
for i in range(r):
    for j in range(c):
        if field[i][j] == '.':
            # Check if the 4 adjacent spots are safe
            if (i == 0 or field[i-1][j] != '*') and \
               (i == r-1 or field[i+1][j] != '*') and \
               (j == 0 or field[i][j-1] != '*') and \
               (j == c-1 or field[i][j+1] != '*'):
                safe_spots += 1

# Print the number of safe spots
print(safe_spots)