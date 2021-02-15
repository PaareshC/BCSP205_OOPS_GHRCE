/*
Write a CPP program to  enter 
students marks in Maths and Science and 
print its average
*/
#include<iostream>
using namespace std;
int main(){
	int alpha1,alpha2;
	cout<<"Maths : ";
	cin>>alpha1;
	cout<<endl<<"Science : ";
	cin>>alpha2;
	cout<<endl<<"Average : "<<(alpha1+alpha2)/2<<endl;
	return 0;
}
