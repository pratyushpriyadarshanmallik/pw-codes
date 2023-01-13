/*Given radius of a circle. Write a function to print the area and circumference of the circle.*/
#include<iostream>
using namespace std;
void area(float r){
    float pi =3.14;
    float area = pi*r*r;
    cout<<"Area:"<<area<<endl;
    float circumference =2*pi*r;
    cout<<"Circumference:"<<circumference<<endl;
    return ;
}
int main(){
    float radius;
    cin>>radius;
    area(radius);
    return 0;
}
