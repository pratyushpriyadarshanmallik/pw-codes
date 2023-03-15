//Write a function that returns the first character, last character and the number of occurrences of ‘t’ in a string input by user.
#include<iostream>
using namespace std;
int NumberofOccurances(string s, char*x,char*y){
    *x=s[0];
    *y=s[s.size()-1];
    int count =0;
    
    for(int i=0;i<s.length();i++){
        if(s[i]== 't'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    char first_letter;
    char last_letter;
    int num = NumberofOccurances(s,&first_letter,&last_letter);
    cout<<"First Letter: "<<first_letter<<endl;
    cout<<"Last Letter: "<<last_letter<<endl;
    cout<<num<<endl;
    return 0;
}
