print("\nReverse all the elements in the array")
animals = ["cat", "dog", "fish"]
animals.reverse()
reversed_animals = [animal[::-1] for animal in animals]
print(reversed_animals)
