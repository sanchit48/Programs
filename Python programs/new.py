class father:
    def __init__(self):
        self.ass="good"

class son(father):
    def __init__(self):
        self.vagina="bad"

    def display(self):
        print(self.vagina)

s1=son()
s1.display()
