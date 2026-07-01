class parent:
  def method1(self):
    print("this is parent class")
    
class new(parent):
  def method2(self):
    print("this is new class")
    
class child(new):
  def method3(self):
    print("this is child class")
    


object2=new()
object2.method2()
object2.method1()