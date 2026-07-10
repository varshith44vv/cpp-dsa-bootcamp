#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    int k=n;int temp;
    for(int i=0;i<n/2;i++){
temp=vec[i];
       vec[i]=vec[k-1];
       vec[k-1]=temp;
       k--;
    }
    cout<<endl;
    for(int i: vec){
        cout<<i;
    }
    return 0;
}