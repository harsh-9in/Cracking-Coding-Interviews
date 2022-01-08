#include <iostream>
using namespace std;

class Employee{
    public:
        int id;
        string name;
        Employee(int id,string name){
            this->id=id;
            this->name=name;
        }
        void printDetails(){
            cout<<"id "<<id<<" and name "<<name<<endl;
        }
        Employee(){}
};
class Programmer:public Employee{
    
    public:
        string language;
        Programmer(string lang,int id,string name){
            language=lang;
            this->id=id;
            this->name=name;
        }

        void getData(){
            cout<<id<<"  "<<name<<" "<<language<<endl;
        }

        Programmer(){}

};

class Designation:public Programmer{

    public:
        string des;
        Designation(int id,string name,string language,string des){
            this->id=id;
            this->name=name;
            this->language=language;
            this->des=des;
        }

        void showDet(){
            cout<<id<<" "<<name<<" "<<language<<" "<<des<<endl;
        }
        


};






int main() {
    Employee e1(1,"harsh"),e2(2,"harshit");
    e1.printDetails();
    e2.printDetails();
    Programmer p1("c++",3,"kr$na");
    p1.getData();

    cout<<p1.id<<endl;


    Designation d1(4,"happy","c++","SDE");
    d1.showDet();
    d1.getData();
    d1.printDetails();

}
