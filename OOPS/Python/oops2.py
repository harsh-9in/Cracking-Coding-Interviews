class Student:

    def __init__(self,name,rollno):
        self.name=name
        self.rollno=rollno
        # self.lap=self.Laptop()

    def showStudent(self):
        print(self.name,self.rollno) 

    class Laptop:

        def __init__(self):
            self.brand="Hp"
            self.cpu="i5"
            self.ram=8   

        def show(self):
            print(self.brand,self.cpu,self.ram)



s1=Student('harsh',10)
s2=Student('harshit',20)

s1.lap.show()

s1.showStudent()



lap1=Student.Laptop()
lap1.brand="Dell"
lap1.show()




    