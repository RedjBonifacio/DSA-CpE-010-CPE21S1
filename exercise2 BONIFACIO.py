class Shape:
    def __init__(self):
        pass

class Triangle(Shape):
    def __init__(self, height, base):
        self.base1 = base
        self.height1 = height

    def areaA(self):
        print(f'Area of triangle = {(self.base1 * self.height1) / 2} cm^2')

class Square(Shape):
    def __init__(self, side):
        self.side1 = side

    def areaB(self):
        print(f'Area of square = {self.side1 ** 2} cm^2')

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length1 = length
        self.width1 = width

    def areaC(self):
        print(f'Area of rectangle = {self.length1 * self.width1} cm^2')

print('(in cm)')
heighty = int(input("Height of triangle: "))
basey = int(input("Base of triangle: "))
sidey = int(input("Side of square: "))
lengthy = int(input("Length of rectangle: "))
widthy = int(input("Width of rectangle: "))

triangle = Triangle(heighty, basey)
square = Square(sidey)
rectangle = Rectangle(lengthy, widthy)

print('\n')
triangle.areaA()
square.areaB()
rectangle.areaC()
