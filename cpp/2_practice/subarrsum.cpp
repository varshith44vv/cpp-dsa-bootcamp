#include<iostream>
using namespace std;
int main(){
    int ma=INT_MIN;
    int arr[]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<7;i++){
        int sum=0;
        for(int j=i;j<7;j++){
            sum=sum+arr[j];
            ma=max(sum,ma);
        }
 
    }
    cout<<"max sum is "<< ma;
    return 0;
}