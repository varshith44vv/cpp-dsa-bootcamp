#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<"befor push";
    for(int i : vec){
        cout<<i;
    }
    vec.clear();
    cout<<"after pop"<<endl;
    for(int i : vec){
        cout<<i;
    }
    if(vec.empty()){
        cout<<"its empty";
    }
    else{
        cout<<"its not empty";
    }
    
    return 0;
}