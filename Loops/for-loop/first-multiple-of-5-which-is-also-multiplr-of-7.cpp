// Print the first multiple of 5 which is also a multiple of 7
#include<iostream>
using namespace std;
int main(){
    //using for loop 
    int i=5;
    for(;;i+=5){
        if(i%7==0){
            break;
        }
    }
    cout<<i<<endl;
    //Using while loop 
    while(true){
        if(i%7==0){
            break;
        }
        i+=5;
    }
    cout<<i<<endl;
    return 0;
}
