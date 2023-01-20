#include<iostream>
using namespace std;
int main(){
    //Traversing through array
    int num[] = {1,2,3,4,5,6};
    //Using for loop
    for(int i =0;i<6;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    //using for each loop
    for(int ele :num){
        cout<<ele<<" ";
    }
    cout<<endl;
    //Using while loop
    int i=0;
    while(i<6){
        cout<<num[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}
