#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    int karr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        karr[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<karr[i];
    }
    
return 0;
}