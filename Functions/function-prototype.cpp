// using function definition after main() function  
// function prototype is declared before main() 
#include<iostream>
using namespace std;
int sub(int,int);//Function Prototype
int main(){
    int difference ;
    difference =sub(200,100);// calling the function and storing the returned value in difference variable 
    cout<<difference<<endl;
    return 0;
}
int sub(int a,int b){ //Function Definataion 
    int diff=a-b;
    return diff;
}
