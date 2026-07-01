class Student:
    def __init__(self, name, age):
      self.name=name
      self.age=age
      
    def show(self):
      print("student name is ",self.name)
      print("student age is " ,self.age)
      
s1 = Student("rehan",20)
s1.show()

s2= Student("noman",15)
s2.show()