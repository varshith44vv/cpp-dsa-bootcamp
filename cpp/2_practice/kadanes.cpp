#include<iostream>
using namespace std;
int main(){
    int ma=INT_MIN;
    int sum=0;
    int arr[]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<7;i++){
 sum=sum+arr[i];
 ma=max(ma,sum);
 if(sum<0){
    sum=0;
 }

    }
    cout<<"max sum is "<< ma;
    return 0;
}