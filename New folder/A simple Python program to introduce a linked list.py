# A simple Python program to introduce a linked list

class Node:
    # Function to initialize the node object
    def __init__(self, data):
        self.data = data  # Assign the data
        self.next = None  # Initialize the next pointer as None (no next node yet)

# LinkedList class to manage the list
class LinkedList:
    # Function to initialize the head of the linked list
    def __init__(self):
        self.head = None  # Initially, the list is empty, so the head is None

    # Function to print the contents of the linked list
    def print_list(self):
        temp = self.head  # Start from the head
        while temp:  # Traverse the list
            print(temp.data)  # Print the data in each node
            temp = temp.next  # Move to the next node

# Code execution starts here
if __name__ == "__main__":
    # Start with an empty list
    llist = LinkedList()

    # Create the first three nodes
    llist.head = Node(1)  # First node with data 1
    second = Node(2)      # Second node with data 2
    third = Node(3)       # Third node with data 3

    # Link the first node to the second
    llist.head.next = second

    # Link the second node to the third
    second.next = third

    # Print the linked list
    llist.print_list()