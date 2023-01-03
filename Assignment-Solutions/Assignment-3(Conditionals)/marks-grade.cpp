/*Write a program to calculate marks to grades. Follow the conversion rule as given below :
100-90 -->A+
90-80 -->A
80-70 -->B+
70-60 -->B
60-50 -->C
50-40 -->D
40-30 -->E
30-0  -->F    */

#include<iostream>
using namespace std;
int main(){
    int marks ;
    cout<<"Enter Your Marks : ";
    cin>>marks;

    if(marks<=100 && marks>90){
        cout<<"Your Grade is A+ "<<endl;
    }
    else if(marks<=90 && marks>80){
        cout<<"Your Grade is A "<<endl;
    }
    else if (marks<=80 && marks>70){
        cout<<"Your Grade is B+ "<<endl;
    }
    else if(marks<=70 && marks>60){
        cout<<"Your Grade is B "<<endl;
    }
    else if(marks<=60 && marks>50){
        cout<<"Your Grade is C "<<endl;
    }
    else if(marks<=50 && marks>40){
        cout<<"Your Grade is D "<<endl;
    }
    else if(marks<=40 && marks>30){
        cout<<"Your Grade is E "<<endl;
    }
    else if(marks<=30 && marks>0){
        cout<<"Your Grade is F "<<endl;
    }
    else{
        cout<<"Please enter your marks from 0 to 100"<<endl;
    }
  return 0;
}
