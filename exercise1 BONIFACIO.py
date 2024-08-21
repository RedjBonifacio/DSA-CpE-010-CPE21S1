class Rectangle:
    def __init__(self, length, width):
        self.l= length
        self.w = width
        
    def area(self):
        print(self.w * self.l)
        
aa = int(input("Width of the rectangle: "))
bb = int(input("Length of the rectangle: "))

rectangle = Rectangle(aa, bb)

rectangle.area()
