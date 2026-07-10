#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int k;

    cin>>n;
    vector<int>vec(n);
    for(int  i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i: vec){
        cout<<i;
    }
    return 0;
}