#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int> &vec,int a,int b){
    int temp;
    temp=vec[a];
    vec[a]=vec[b];
    vec[b]=temp;
}

int main(){
    int n;
    cin>>n;
    int max;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        max=vec[i];
        for(int j=i;j<n;j++){
        if(max<vec[j]){
            max=vec[j];
            swap(vec,i,j);
        }
        }

    }
    cout<<endl;
    for(int i: vec){
        cout<<i<<endl;
    }
    

    return 0;
}