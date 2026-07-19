#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        if(vec[i+1]<vec[i]){
           cout<<"its not sorted";
           count++;
        }
    }
    if(count==0){
        cout<<"its sorted";
    }
    

    return 0;
}