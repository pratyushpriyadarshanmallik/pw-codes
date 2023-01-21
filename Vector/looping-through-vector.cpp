#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    cout<<"Enter Elements: ";
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<endl;
    cout<<"Looping Using for loop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Looping using for each loop"<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Looping using while loop"<<endl;
    int idx =0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }
    cout<<endl;
    return 0;
}
