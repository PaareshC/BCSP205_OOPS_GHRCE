/*
Write a C++ program implement a 
class 'Complex' of complex numbers. 
The class should include member functions
 to add and subtract two complex numbers. 
 Use copy constructors to initialize the 
 member variables.
 */
#include<iostream>
using namespace std;
class Complex{
private:
    int real,imag;
public:
    Complex(){
        real=1;
        imag=1;
    }
   Complex(int r, int i){
    real=r;
    imag=i;
    }
    Complex(Complex &c){
        real=c.real;
        imag=c.imag;
    }
    void get_data();
    Complex operator+(Complex);
	Complex operator-(Complex);
};
void Complex::get_data(){
        cout<<real<<" + "<<imag<<" i ";
}
Complex Complex::operator+(Complex c1){
    Complex temp;
    temp.real=real+c1.real;
    temp.imag=imag+c1.imag;
    return temp;
}
Complex Complex::operator-(Complex c1){
    Complex temp;
    temp.real=real-c1.real;
    temp.imag=imag-c1.imag;
    return temp;
}
int main()
{
    Complex c1(3,7),c2(c1),c3,temp;
    cout<<endl<<"c2 is : ";
    c2.get_data();
    cout<<endl<<"c3 is : ";
    c3.get_data();
    cout<<endl<<"c2 + c3 = ";
    temp=c2+c3;
    temp.get_data();
    cout<<endl<<"c2 - c3 = ";
    temp=c2-c3;
    temp.get_data();
    return 0;
} 
