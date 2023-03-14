//Adding 2 numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"Enter x & y: ";
    cin>>x>>y;
    int *ptrx =&x;
    int *ptry = &y;
    int result;
    int *ptr_result=&result;
    *ptr_result = *ptrx + *ptry;
    cout<<"Result:"<<result<<endl;
    return 0;
}
