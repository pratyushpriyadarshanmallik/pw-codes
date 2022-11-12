/*Write a program to print the day name based upon the day number.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1:
         cout<<"Monday\n";
         break;
        case 2:
         cout<<"Tuesday\n";
         break;
        case 3:
         cout<<"Wednesday\n";
         break;
        case 4:
         cout<<"Thursday\n";
         break;
        case 5:
         cout<<"Friday\n";
         break;
        case 6:
         cout<<"Saturday\n";
         break;
        case 7:
         cout<<"Sunday\n";
         break;
        default:
        cout<<"Enter number from 1 to 7\n";
    }
    return 0;
}
