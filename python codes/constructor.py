class cars:
    def __init__(self,model,brand):
        self.model=model
        self.brand=brand

    def display(self):
        print("model>>>>>>>",self.model)
        print("brand---->",self.brand)


c1=cars("2020","mercedes")
c1.display()

c2=cars("1991","toyota")
c2.display()