#include<iostream>
using namespace std;
bool checkEligibilty(int age , int limit){
    if(age>=limit){
        //the person is eligible 
        return true;
    }
    else{
        //the person is not eligible
        return false;
    }
}
int main(){
    int age;
    cin>>age;
    int limit =18;
    int is_eligible_for_voting  = checkEligibilty(age , limit);
    if(is_eligible_for_voting==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
