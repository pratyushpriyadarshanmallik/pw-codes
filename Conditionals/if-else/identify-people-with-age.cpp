#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your age :";
    int age;
    cin>>age;
    if(age<12){
        cout<<"Child";
    }
    else if(age>19){
        cout<<"Adult";
    }else{
        cout<<"Teenager";
    }
    return 0;
}
