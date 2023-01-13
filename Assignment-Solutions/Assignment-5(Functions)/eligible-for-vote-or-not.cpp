/*Given the age of a person, write a function to check if the person is eligible to vote or not.*/
#include<iostream>
using namespace std;
void voteornot(int age){
    if(age>=18){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return ;
}
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    voteornot(age);
}
