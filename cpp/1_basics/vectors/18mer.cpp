#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec1(n);
    vector<int>vec2(m);
    vector<int>vec3(m+n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    for(int i=0;i<m;i++){
        cin>>vec2[i];
    }
    cout<<endl;
    
    for(int i=0;i<n+m;i++){
       if(i<n){
        vec3[i]=vec1[i];
       }
       else{
        vec3[i]=vec2[i-n];
       }
    }
    cout<<endl;
    for(int i: vec3){
        cout<<i;
    }
    return 0;
}