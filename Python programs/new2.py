class MyException(Exception):
    def __init__(self,arg):
        self.msg=arg

    def check(dict):
        for k,v in dict.items():
            print("Name = {} balance = {}".format(k,v))
            if (v<2000):
                raise MyException("balance amount less in {}".format(k))

    bank={"raj":500,"sanju":4500}

    try:
        check(bank)
    except MyException as me:
        print(me)
