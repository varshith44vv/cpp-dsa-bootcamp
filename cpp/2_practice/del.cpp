

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<"befor push";
    for(int i : vec){
        cout<<i;
    }
    vec.pop_back();
    cout<<"after pop"<<endl;
    for(int i : vec){
        cout<<i;
    }
    
    return 0;
}