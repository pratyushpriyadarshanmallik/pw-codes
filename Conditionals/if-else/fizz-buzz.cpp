/*. Write a short program that gives the following as output - 
For each multiple of 3, print "Fizz" instead of the number.
For each multiple of 5, print "Buzz" instead of the number. 
For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.
Otherwise print the number itself.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"FizzBuzz";
    }
    else{
        if(n%3==0){
            cout<<"Fizz";
        }
        else{
            cout<<"Buzz";
        }
    }
    return 0;
}
