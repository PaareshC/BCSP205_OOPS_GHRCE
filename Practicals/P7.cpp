/*
Create a class Distance, which accepts 
data in feet and inches adds two distances
 and displays the members of the distance 
 object in the appropriate form. Test the class 
 in the main program by creating object 
 d1 and d2 of type distance, accept data 
 for each object and add them then 
 display them. (Operator Overloading)
 */
 #include<iostream>
using namespace std;
class Distance{
    private:
        int dist_feet,dist_inches;
    public:
        Distance(){
            dist_feet=0;
            dist_inches=0;
        }
        Distance(int a,int b){
            dist_feet=a+b/12;
            dist_inches=b%12;
        }
        // All inches constructor
        Distance(int c){
            dist_feet=c/12;
            dist_inches=c%12;
        }
        void display();
        Distance operator+(Distance);
};
void Distance::display(){
    cout<<endl<<"Distance in feet is "<<dist_feet<<" and inches is "<<dist_inches;
}
Distance Distance::operator+(Distance temp){
    Distance temp2;
    // Converting everything to inches
    int total_inches;
    total_inches=dist_inches+temp.dist_inches+(12*dist_feet)+(12*temp.dist_feet);
    temp2.dist_feet=total_inches/12;
    temp2.dist_inches=total_inches%12;
    return temp2;
}
int main(){
    Distance d1(4,10),d2(2,3),d3;
    d1.display();
    d2.display();
    d3=d1+d2;
    d3.display();
    return 0;
} 
