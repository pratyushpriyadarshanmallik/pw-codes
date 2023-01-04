/*Write a program to print all Armstrong numbers between 100 to 500.*/
#include<iostream>
using namespace std;
int main(){
    for(int i=100;i<500;i++){
        int lastdigit =i%10;
        int middigit = (i/10)%10;
        int firstdigit = (i/100)%10;
        if((lastdigit*lastdigit*lastdigit)+(middigit*middigit*middigit)+(firstdigit*firstdigit*firstdigit)==i)
            cout<<i<<endl;
    }
    return 0;
}
