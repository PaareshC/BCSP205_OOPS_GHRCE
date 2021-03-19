/*
Create a class called rectangle. 
This class should contain as member 
functions area, perimeter
*/
#include <iostream>
using namespace std;
class Reactangle{
    int lenght,breadth;
    public:
//Default Constructor 1 lenght and 1 breadth
  Reactangle(){
      lenght=1;
      breadth=1;
  } 
  Reactangle(int a,int b){
      lenght=a;
      breadth=b;
  }
  int get_area();
  int get_perimeter();
};
int Reactangle::get_area(){
    int temp;
    temp=lenght*breadth;
    return temp;
}
int Reactangle::get_perimeter(){
    int temp;
    temp=2*(lenght+breadth);
    return temp;
}
int main(){
    Reactangle r1,r2(2,3);
    cout<<endl<<"Reactangle 1 : r1";
    cout<<endl<<"Area of r1 is "<<r1.get_area();
    cout<<endl<<"Perimeter of r1 is "<<r1.get_perimeter();
    cout<<endl<<"Reactangle 2 : r2";
    cout<<endl<<"Area of r2 is "<<r2.get_area();
    cout<<endl<<"Perimeter of r2 is "<<r2.get_perimeter();
    return 0;
}
