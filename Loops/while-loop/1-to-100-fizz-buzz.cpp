/*K Write a short Program that Prints each number from 1 to 100 on a new line. 

 For each multiple of 3, Print "Fizz" instead of the number.

 For each multiple of 5, print "Buzz" instead of the number. 

 For numbers which are multiples of both 3 and "B Lrint "FizzBuzz" instead of the number.
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<100){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz\n";
        }
        else{
            if(i%3==0){
                cout<<"Fizz\n";
            }
            else if(i%5==0){
                cout<<"Buzz\n";
            }
            else{
                cout<<i<<" ";
            }
        }
        i++;
    }
    return 0;
}
