/*
Write object-oriented C++ program .
Define First base class with data 
member name. Second base class with 
data member telephone no. Derived 
class with data member height. 
Program should display details 
of a student(Multiple l inheritance)
*/
#include<iostream>
using namespace std;
// 1. Name Class
class Name{
  private:
    string name;
  public:
    Name(){
        name="Default Name";
    }
    void get_name(){
        cout<<endl<<"Name of Student is : "<<name;
    }
    void set_name(){
        cout<<endl<<"Enter Name of Student : ";
        cin>>name;
    }
};
// 2.Telephone Number Class
class Tel_number{
    private:
        long int number;
    public:
    Tel_number(){
        number=0000000000;
    }
    void get_number(){
        cout<<endl<<"Telephone Number is : "<<number;
    }
    void set_number(){
       cout<<endl<<"Enter Telephone Number of Student : ";
       cin>>number;
    }
};
// 3. Height Class
class Height: public Name ,public Tel_number{
    private:
        float hgt;
    public:
    Height(){
        hgt=0.0;
    }
    void get_height(){
        cout<<endl<<"Height is : "<<hgt<<" feet";
    }
    void set_height(){
        cout<<endl<<"Enter Height of Student : ";
        cin>>hgt;
    }
};
int main(){
    Height h1;
    h1.set_name();
    h1.set_number();
    h1.set_height();
    h1.get_name();
    h1.get_number();
    h1.get_height();
    return 0;
}
