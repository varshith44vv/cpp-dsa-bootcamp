#include<iostream>
using namespace std;
int main(){
    int sma=INT_MAX;
    int sec=INT_MAX;
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    if(arr[i]<sma){
sec=sma;
sma=arr[i];
    }
        else if(arr[i]<sec && arr[i]!=sma){
            sec=arr[i];
        }

}

cout<<"secon smallest is "<<sec;
return 0;
}