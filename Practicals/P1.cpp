/*
Practical 1
 Write a program in C++ to exchange 
 the content of two variables using call 
 by reference*/
 #include<iostream>
using namespace std;

void swap(int &a,int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int num1,num2;
    cout<<endl<<"Enter Number 1 = ";
    cin>>num1;
    cout<<endl<<"Enter Number 2 = ";
    cin>>num2;
    cout<<endl<<"Number BEFORE swapping are "<<num1<<" and "<<num2;
    swap(num1,num2);
    cout<<endl<<"Numbers AFTER swapping are "<<num1<<" and "<<num2;
    return 0;
}
