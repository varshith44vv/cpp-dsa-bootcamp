#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[k]){
            k++;
            arr[k]=arr[j];
        }
    }
    cout<<k<<endl;
    for(int l=0;l<=k;l++){
        cout<<arr[l];
    }
}