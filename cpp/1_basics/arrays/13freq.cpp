#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    int count=0;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"eneter key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            count++;
        }
    }
    if(count==0){
        cout<<"element not found"<<endl;

    }
    else{
        cout<<"element occured is "<<count<< "times";
    }
return 0;
}