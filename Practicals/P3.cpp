/*
Write a program in C++ to create 
a point class. The class should 
have two member function line length, 
slope which takes as input two points 
and will return the length of the line 
and slope of the line respectively.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Point{
  private:
    int x_cor,y_cor;
  public:
    Point(){
        x_cor=0;
        y_cor=0;
    }
    Point(int a,int b){
        x_cor=a;
        y_cor=b;
    }
    double slope(Point);
    double lenght(Point);
};
double Point::slope(Point p2){
    double temp;
    temp=(p2.y_cor-y_cor)/(p2.x_cor-x_cor);
    return temp;
}
double Point::lenght(Point p2){
    double temp;
    temp=sqrt(pow((p2.y_cor-y_cor),2)+pow((p2.x_cor-x_cor),2));
    return temp;
}
int main(){
    Point p1(1,1),p2(2,2);
    double slope,lenght;
    slope=p2.slope(p1);
    cout<<endl<<"Slope is "<<slope;
    lenght=p2.lenght(p1);
    cout<<endl<<"Lenght is "<<lenght;
    return 0;
}
