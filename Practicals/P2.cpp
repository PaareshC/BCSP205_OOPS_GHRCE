/*
Write a program in C++ to create a 
number class. The class should contain 
functions to increment and decrement 
the number. */
#include <iostream>
using namespace std;


class Number
{
    int val;
    public:
    
    void getdata(int);
    void display();
    Number incr();
    Number decr();
    
};
void Number::getdata(int a){
	val=a;
}
void Number::display(){
	cout<<endl<<"The number is "<<val;
}
Number Number::incr(){
    Number temp;
	temp.val=++val;
	return temp;
}
Number Number::decr(){
	Number temp;
	temp.val=--val;
	return temp;
}	
int main(){
	Number n1;
	n1.getdata(5);
	n1.display();
	n1.incr();
	n1.display();
	n1.decr();
	n1.display();		
	return 0;
}
