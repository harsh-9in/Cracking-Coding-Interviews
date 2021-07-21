class A:
    def work(self):
        print("This work has been done by A")

class B:
    def work(self):
        print("This work has been done by B")



def kaam(obj):
    obj.work()


d=A()
kaam(d)

d=B()
kaam(d)

