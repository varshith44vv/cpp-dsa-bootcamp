#include<iostream>
using namespace std;
int main(){
    int lar=INT_MIN;
    int sec=INT_MIN;
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    if(arr[i]>lar){
sec=lar;
lar=arr[i];
    }
        else if(arr[i]>sec&& arr[i]!=lar){
            sec=arr[i];
        }

}

cout<<"secon largest is "<<sec;
return 0;
}