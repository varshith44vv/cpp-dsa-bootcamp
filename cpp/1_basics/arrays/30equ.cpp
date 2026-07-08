#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
for(int i=0;i<n;i++){
    cin>>arr2[i];
}
int count =0;
for(int i=0;i<n;i++){
    if(arr1[i]==arr2[i]){
        count++;
    }
}
if(count==n){
    cout<<"its equal";
}

    return 0;
}