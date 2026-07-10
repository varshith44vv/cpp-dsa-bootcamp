#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec1(n);
    vector<int>vec2(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
       vec2[i]=vec1[i];
    }
    cout<<endl;
    for(int i: vec2){
        cout<<i;
    }
    return 0;
}