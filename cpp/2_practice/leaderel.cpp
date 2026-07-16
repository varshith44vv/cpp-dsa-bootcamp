#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                count++;
            }
            
        }
        if(count==n-1-i){
                cout<<arr[i]<<"its a leader element"<<endl;
            }

    }
    return 0;
}