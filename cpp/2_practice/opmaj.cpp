#include<iostream>
using namespace std;
int main(){
    int p=0;
    int n=5;
    int count=1;
    int  arr[]={1,1,1,2,2};
    for(int i=1;i<n;i++){
      if(arr[p]==arr[i]){
count++;
      }
      else{
        count=1;
        p=i;
      }
      if(count>n/2){
        cout<<"maj is "<<arr[p];
      }
    }
    return 0;
}