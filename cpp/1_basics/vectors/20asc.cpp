#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    int min;
    int k=-1;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        min=vec[i];
        for(int j=i;j<n;j++){
        if(min>vec[j]){
            min=vec[j];
            k=j;
        }
        
        }
        if(k!=-1){
vec[k]=vec[i];
        vec[i]=min;
        }
    }
    cout<<endl;
    for(int i: vec){
        cout<<i<<endl;
    }
    

    return 0;
}