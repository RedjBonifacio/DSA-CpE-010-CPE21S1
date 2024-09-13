from array import array  # Importing array from the array module

# Initializing array a
a = array('i', [4, 5, 6, 7])

# Inserting element 2 at index 1
a.insert(1, 2)

# Printing array a
print(a)  # Output: array('i', [4, 2, 5, 6, 7])

# Insert element 0 at the last index (-1)
a.insert(-1, 0)

# Printing updated array a
print(a)  # Output: array('i', [4, 2, 5, 6, 0, 7])

# Attempting to insert -1 at index 10 (which is out of range)
a.insert(10, -1)

# Printing the array again
print(a)  # Output: array('i', [4, 2, 5, 6, 0, 7, -1])