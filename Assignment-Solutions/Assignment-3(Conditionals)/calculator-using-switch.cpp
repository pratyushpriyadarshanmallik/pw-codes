/*Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter first number: ";
    cin>>num1;
    int num2 ;
    cout<<"Enter Second number: ";
    cin>>num2;

    char op;
    cout<<"Enter the Operator: ";
    cin>>op;
    switch(op){

        case '+':
         cout<<num1+num2<<endl;
         break;

        case '-':
         cout<<num1-num2<<endl;
         break; 
        
        case '*':
         cout<<num1*num2<<endl;
         break;

        case '/':
         cout<<num1/num2<<endl;
         break; 

        default:
         cout<<"Please enter a valid operator"<<endl; 

    }
    return 0;
}
