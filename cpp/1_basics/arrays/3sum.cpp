#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4};
    int sum=0;
    for(int i=0;i<=2;i++){
       sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}