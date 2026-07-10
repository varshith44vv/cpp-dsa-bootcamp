#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    vector<int>vec(n);
    for(int  i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i: vec){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}