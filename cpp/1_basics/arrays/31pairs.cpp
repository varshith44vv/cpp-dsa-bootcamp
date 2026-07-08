#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"desired sum"<<endl;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==sum){
    cout<<arr[i]<<" and "<<arr[j]<<" are pairs to get sum "<<sum<<endl;
}
        }
    }
    return 0;
}