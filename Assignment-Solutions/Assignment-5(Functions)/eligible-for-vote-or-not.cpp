#include<iostream>
using namespace std;
bool checkEligibilty(int age , int limit){
    if(age>=limit){
        //the person is eligible 
        return true;
    }
    else{
        //thr person is not eligible
        return false;
    }
}
int main(){
    int age, limit;
    cin>>age >>limit;
    int is_eligible_for_voting  = checkEligibilty(age , 18);
    if(is_eligible_for_voting==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
