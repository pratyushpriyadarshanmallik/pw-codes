//Write a C++ program to take length and breadth of a rectangle and print its area.
#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter length: ";
    cin>>length;
    int breadth;
    cout<<"Enter breadth: ";
    cin>>breadth;

    int area=length*breadth;

    cout<<"Area of rectangle is "<<area<<endl;
    return 0;
}
