#include<iostream>
using namespace std;
int main(){
    float avg;
    int arr[]={2,3,4};
    int sum=0;
    for(int i=0;i<=2;i++){
       sum=sum+arr[i];
    }
    avg=sum/3;
    cout<<avg;
    return 0;
}