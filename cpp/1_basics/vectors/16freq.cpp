#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int key;

    cin>>n;
    cin>>key;
    int count=0;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(key==vec[i]){
           count++;
        }
    }
    if(count==0){
        cout<<"element not found";
    }
    else{
        cout<<"occured "<< count<< " times";
        }

    return 0;
}