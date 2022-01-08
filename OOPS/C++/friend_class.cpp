#include <iostream>  
using namespace std;  

class Complex;

class Calculator{

    public:
        int add(int a,int b){
            return (a+b);
        }
         int addreal(Complex,Complex);
};

class Complex{
    int a,b;
    friend int Calculator:: addreal(Complex ,Complex );
    public:
    void setval(int a,int b){
        this->a=a;
        this->b=b;
    }

    void printcomplex(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};

int Calculator::  addreal(Complex n1,Complex n2){
            return (n1.a+n2.a);
}




int main(){

    Complex n1,n2;
    n1.setval(1,4);
    n2.setval(2,4);
    n1.printcomplex();
    n2.printcomplex();


    Calculator calc;

    cout<<calc.addreal(n1,n2);
    






}
