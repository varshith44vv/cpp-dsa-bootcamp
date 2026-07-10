#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int small=INT_MAX;

    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i: vec){
        if(i<small){
            small=i;
        }
    }
    cout<<small;
    return 0;
}