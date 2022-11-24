//Looping in Vector 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    //Declaraing a vector with size and using for loop 
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //For loop by not declaring size with vector 
    vector<int> v2;//Size is not declared here 
    for(int i=0;i<4;i++){//We must declare size here
        int element; cin>>element ;
        v2.push_back(element);
    } 
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,6);//Inserting an element using insert function
    //Using for-each loop 
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);//Deleting an element using erase function 
    //Using while loop
    int idx=0; 
    while(idx<v.size()){
        cout<<v[idx++]<<" ";//First the element is printed through idx , then the value is incremented 
    }
    cout<<endl;
    return 0;
}
