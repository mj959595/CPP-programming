class cars:
  def __init__(self,model,brand):
    self.model=model
    self.brand=brand
    
  def display(self):
    print("car brand is = ",self.brand)
    print("car model is = ",self.model)
  
  
c1=cars(2026,"toyota")
c1.display()