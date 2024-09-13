# Function to initialize the node object
class Node:
    def __init__(self, data):
        self.data = data  # Assign data to the node
        self.next = None  # Initialize the next pointer as null

# Linked List class
class LinkedList:
    # Function to initialize the Linked List object
    def __init__(self):
        self.head = None  # Set head as None