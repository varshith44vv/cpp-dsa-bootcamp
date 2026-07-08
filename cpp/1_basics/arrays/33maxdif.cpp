#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=INT_MIN;
    int b=INT_MAX;
    int dif;
    for(int i=0;i<n;i++){
        cin>>arr[i];
 }
 for(int i=0;i<n;i++){
    a=max(a,arr[i]);
    b=min(b,arr[i]);
 }
 dif=a-b;
 cout<<"max diff is"<<dif<<endl;
return 0;
}