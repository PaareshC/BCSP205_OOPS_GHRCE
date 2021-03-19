/*
Write object-oriented C++ program 
Create two classes Minutes that 
stores time in minutes and Seconds 
that stores time in seconds. Read values
for the class objects and add one object
of Minutes with another object of Seconds.
Use friend function to carry out the 
addition operation and display the 
resultant time in hours, minutes and seconds.
*/
#include <iostream>
using namespace std;
class Seconds;
class Minutes;
void add(Minutes m, Seconds s);
class Minutes{
    private:
        int min;
    public:
        Minutes(){
        min=0;
        }
        Minutes(int m){
        min=m;
        }
    friend void add(Minutes m, Seconds s);
};
class Seconds{
    private:
        int sec;
    public:
        Seconds(){
        sec=0;
        }
        Seconds(int s){
        sec=s;
        }
    friend void add(Minutes m, Seconds s);
};
void add(Minutes m,Seconds s){
    int hr=0;
    while(s.sec>60){
        m.min=m.min+1;
        s.sec=s.sec-60;
    }
    while(m.min>60)
    {
        hr=hr+1;
        m.min=m.min-60;
    }
    cout<<"Time is : "<<hr<<" hrs "<<m.min<<" mins "<<s.sec<<" secs ";
};
int main(){
    Minutes m(70);
    Seconds s(65);
    add(m,s);
    return 0;
}
