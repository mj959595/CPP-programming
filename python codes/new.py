class student:
    def __init__(self, name,rollno,age,marks):
        self.name = name
        self.rollno = rollno
        self.age = age
        self.marks = marks
    
    def display(self):
        print("Name:", self.name)
        print("Roll No:", self.rollno)
        print("Age:", self.age)
        print("Marks:", self.marks)


s1 = student("Ali", 101, 20, 85)


s2=student("Sara", 102, 22, 90)
s2.display()