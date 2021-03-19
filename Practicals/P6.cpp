/*
Write a C++ program implement a 
class 'Complex' of complex numbers. 
The class should include member functions
 to add and subtract two complex numbers. 
 Use copy constructors to initialize the 
 member variables.
 */
#include <iostream>
using namespace std;

struct complex
{
    int real;
    int imag;
};

complex complex_set(int a , int b);
complex operator+(complex a,complex b);
complex operator-(complex a,complex b);
complex operator*(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
    
}
void complex_print(complex);


int main()
{
    complex c1,c2,c3,c4,c5;
    c1=complex_set(2,3);
    complex_print(c1);
    c2=complex_set(3,4);
    complex_print(c2);
    cout<<endl<<"Addition of two complex numbers"<<endl;
    //c3=add_complex(c1,c2);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    complex_print(c3);
    complex_print(c4);
    complex_print(c5);
}

complex complex_set(int a, int b)
{
    complex temp;
    temp.real=a;
    temp.imag=b;
    return temp;
}

void complex_print(complex c)
{
    cout<<endl<<c.real<<"+"<<c.imag<<"i";
}

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
    
}
complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
    
}
complex operator*(complex c1, complex c2)
{
    complex temp;
    temp.real=(c1.real*c2.real)-(c1.imag+c2.imag);
    temp.imag=(c1.real*c2.imag)+(c1.imag+c2.real);
    return temp;
    
}
 
