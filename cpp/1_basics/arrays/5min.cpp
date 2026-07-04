#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,4};
    int k=arr[0];
    for(int i=1;i<=2;i++){
        k=min(k,arr[i]);
    }
    cout<<k;
    return 0;
}