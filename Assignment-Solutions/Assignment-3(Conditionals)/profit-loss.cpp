/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss*/
#include<iostream>
using namespace std;
int main(){
    int sellprice;
    cout<<"Enter Selling Price: ";
    cin>>sellprice;
    int costprice;
    cout<<"Enter Cost Price: ";
    cin>>costprice;
    if(sellprice>costprice){
        int profit = sellprice - costprice;
        cout<<"Profit = "<<profit<<endl;
    }
    else{
        int loss = costprice - sellprice;
        cout<<"Loss = "<<loss<<endl;
    }
    return 0;
}
