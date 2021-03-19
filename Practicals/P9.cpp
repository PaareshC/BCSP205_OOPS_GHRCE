/*
Write object-oriented C++ program to 
define a base class Student with data 
member name. Intermediate Derived class 
Details with data members telephone no. 
Another Derived class Stats with data 
member height. Program should display 
details of a student(Multilevel inheritance)
*/
#include <iostream>
using namespace std;
// Student Class
class Student{
    protected:
        string name;
    public:
        void get_name();
        void set_name(string);
};
void Student::get_name(){
    cout<<endl<<" Name of Student is "<<name;
}
void Student::set_name(string s1){
    name=s1;
}
// Number Class
class Number: public Student{
    protected:
        long int phone_number;
    public:
        void get_number();
        void set_number(long int);
};
void Number::get_number(){
    cout<<endl<<" Number of Student is "<<phone_number;
}
void Number::set_number(long int i1){
    phone_number=i1;
}
// Stats Class
class Stats: public Number{
    protected:
        int height;
    public:
        void get_height();
        void set_height(int);
};
void Stats::get_height(){
    cout<<endl<<" Height of Student is "<<height;
}
void Stats::set_height(int h1){
    height=h1;
}
// Main Function
int main(){
    Stats s1;
    s1.set_name("Paresh");
    s1.get_name();
    s1.set_number(9876543210);
    s1.get_number();
    s1.set_height(5);
    s1.get_height();
    return 0;
} 
