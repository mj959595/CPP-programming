class Student:
    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("Marks:", self.marks)


# Create object
student1 = Student()

# Assign values
student1.name = "Ali"
student1.age = 20
student1.marks = 85

# Display data
student1.display()

student2= Student()
student2.name = "Sara"
student2.age = 22
student2.marks = 90
student2.display()
