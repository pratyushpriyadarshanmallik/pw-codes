//Implement the swap function using pointers.
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Before Swap"<<endl;
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    swap(&x,&y);
    cout<<"After Swap"<<endl;
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    return 0;
}
