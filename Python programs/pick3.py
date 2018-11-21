class queue:
    def __init__(self):
        self.qu=[10,20,30,40,50]

    def isempty(self):
        return self.qu==[10,20,30,40]

    def add(self,element):
        self.qu.append(element)

    def delete(self):
        if self.isempty():
            return self.qu.pop(1)
        else:
            return -1

    def search(self,element):
        if self.isempty():
            try:
                 n=self.qu.index(element)
                 return n
            except ValueError:
                 return -2
        else:
            return -1

    def display(self):
         return self.qu
