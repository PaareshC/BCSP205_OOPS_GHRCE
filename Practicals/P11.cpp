/*
Create a base class in C++ called shape. 
Use this class to store two double type 
values that could be used to compute the 
area of figures. Derive two specific classes
called triangle and rectangle from the base 
shape. Add to the base class a member function 
get_data () to initialize base class data 
members and another member function display_area ()
to compute and display the area of figures. 
Make display_area () a virtual function and
redefine this function in the derived classes
to suit their requirements. Using these 
classes, design a program that will accept 
the dimensions of a triangle or a rectangle 
interactively and display the area.
*/
#include <iostream>
using namespace std;
class Shape{
    public:
        virtual void get_data()=0;
        virtual void display_area()=0;
};
class Triangle: public Shape{
    private:
        float base,height;
    public:
    Triangle(){
        base=1.0;
        height=1.0;
    }
    void get_data(){
        cout<<endl<<"Enter Base : ";
        cin>>base;
        cout<<endl<<"Enter Height : ";
        cin>>height;
    }
    void display_area(){
        cout<<endl<<"Area of Traingle is "<<(0.5*base*height);
    }
};
class Rectangle: public Shape{
    private:
        float side1,side2;
    public:
        Rectangle(){
            side1=1.0;
            side2=1.0;
        }
        void get_data(){
            cout<<endl<<"Enter lenght ";
            cin>>side1;
            cout<<endl<<"Enter breadth ";
            cin>>side2;
        }
        void display_area(){
            cout<<endl<<"Area of Rectangle is "<<(side2*side1);
        }
};
int main(){
    Shape *ptr;
    Triangle t;
    ptr=&t;
    ptr->get_data();
    ptr->display_area();
    Rectangle r;
    ptr=&r;
    ptr->get_data();
    ptr->display_area();
    return 0;
}

