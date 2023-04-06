//Remove all a fro, the string 
#include<iostream>
using namespace std;
string removea(string &s,int idx, int n){
    //Base case
    if(idx==n){
        return "";
    }
    string curr="";
    curr+=s[idx];
    return ((s[idx]=='a') ? "" : curr) + removea(s,idx+1,n);
}
int main(){
    int n =5;
    string s ="abcax";
    cout<<removea(s,0,n)<<endl;
    return 0;
}
