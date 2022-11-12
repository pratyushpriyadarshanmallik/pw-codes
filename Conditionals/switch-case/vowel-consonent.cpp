/*Write a program using switch statements to check if the input lowercase character is vowel or consonant*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch(ch){
        case'a':
         cout<<"Vowel\n";
         break;
        case 'e':
         cout<<"Vowel\n";
         break;
        case 'i':
         cout<<"Vowel\n";
         break;
        case 'o':
         cout<<"Vowel\n";
         break;
        case 'u':
         cout<<"Vowel\n";
         break;
        default :
        cout<<"Consonent\n";
    }
    return 0;
}
