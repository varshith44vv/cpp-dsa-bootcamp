#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter item to be searched"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
       if(arr[i]==key){
        cout<<"the element is at"<<i<<endl;
        count++;
       }
       
    }
    if(count==0){
        cout<<"element not found";
    }
    return 0;
}