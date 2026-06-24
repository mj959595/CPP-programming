class fruites:
    def __init__(self,name,color,taste):
        self.name=name
        self.color=color
        self.taste=taste

    def getter(self):
        print("name:",self.name)
        print("color",self.color)
        print("taste",self.taste)

f1=fruites("mango","yellow","sweet")
f1.getter()