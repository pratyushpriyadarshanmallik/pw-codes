//Write a program to find the product of 2 numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int *ptrx =&x;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    int *ptry=&y;
    int result;
    int *ptr_result = &result;
    *ptr_result=(*ptrx)*(*ptry);
    cout<<"Product of x and y is: "<<result<<endl;
    return 0;
}
