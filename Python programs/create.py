class emp:
    def __init__(self,id,name,salary):
        self.id = id
        self.name = name
        self.salary = salary

    def display(self):
        print("Your Name Is {},Your Id Is {} And Your Salary Is {} ".format(self.name,self.id,self.salary))

#s1=employee()
#s1.display()

#from employee import*
#from create import employee
