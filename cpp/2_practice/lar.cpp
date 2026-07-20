#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int lar=INT_MIN;

    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i: vec){
        if(i>lar){
            lar=i;
        }
    }
    cout<<lar;
    return 0;
}