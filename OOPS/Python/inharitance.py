# Super class / Parent class
class A:
    def feature1(self):
        print("feature 1 is working")

    def feature2(self):
        print("Feature 2 is working")


#  Sub class /  Child Class
class B(A):
    def feature3(self):
        print("feature 3 is working")

    def feature4(self):
        print("Feature 4 is working")

#  multi level class
class C(B):
    def feature3(self):
        print("feature 3 is working")

    def feature4(self):
        print("Feature 4 is working")

class Ind:
    def independent(self):
        print("This is an independent class")

#   multiple inhariting 
class D(A,Ind):
    def hello(self):
        print("This is an example of Multiple inhariting")
        


a=A()

a.feature1()
a.feature2()

b=B()

b.feature3()
b.feature2()

c=C()
c.feature1()

d=D()

d.feature2()
d.independent()
