#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int j=1;j<=k;j++){
    temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}