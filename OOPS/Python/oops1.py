class Employee:
    pass
    # constructor
    # def __init__(self,):


emp1=Employee()
emp2=Employee()

print(emp1)
print(emp2)

emp1.first='harsh'
emp1.second='kumar'
emp1.email='harsh@gmail.com'

emp2.first = 'test'
emp2.second = 'last'
emp2.email = 'test@gmail.com'

print(emp1.email)
print(emp2.email)





class Computer:

    display=1

    def __init__(self,cpu,ram):
        self.cpu=cpu
        self.ram=ram



    def config(self,cpu,ram):
        print(cpu,ram)

         
    @classmethod
    def info(self):
        print( self.display)



cmp1=Computer("i5",8)
cmp1.config("i10",10)
cmp2=Computer("i7",16)
cmp2.display=2
print(cmp1.display)
print(cmp2.display)

Computer.info()

