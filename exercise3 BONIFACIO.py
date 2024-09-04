animal1 = "cat"
animal2 = "dog"
animal3 = "fish"

#A. Accessing the Elements in the Array
print("A. Accessing the Elements in the Array")
animals = ["cat", "dog", "fish"]
a = animals[0]
print (a)

#B. Modifying the Elements in the Array
print("\nB. Modifying the Elements in the Array")
animals = ["cat", "dog", "fish"]
animals[0] = "monkey"
print (animals)

#C. Length of an Array
print("\nC. Length of an Array")
animals = ["cat", "dog", "fish"]
c = len(animals)
print (c)

#D. Looping Array Elements
print ("\nD. Looping Array Elements")
animals = ["cat", "dog", "fish"]
for d in animals:
    print(d)

#E. Adding Elements in the Array
print ("\nE. Adding Elements in the Array")
animals = ["cat", "dog", "fish"]
animals.append("monkey")
print(animals)

#F. Removing an Element in the Array
print ("\nF. Removing an Element in the Array")
animals = ["cat", "dog", "fish"]
animals.pop(1)
print(animals)

#G. Reverse all the elements in the array
#EXERCISE#
print ("\nG. Reverse all the elements in the array")
animals = ["cat", "dog", "fish"]
animals.reverse()
print(animals)


