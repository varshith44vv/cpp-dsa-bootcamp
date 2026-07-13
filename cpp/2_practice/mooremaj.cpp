#include<iostream>
using namespace std;
int main(){
    int p=0;
    int n=5;
    int count=0;
    int ans=0;
    int arr[]={1,1,1,2,2};
    for(int i=0;i<n;i++){
      if(count==0){
        ans=arr[i];
      }
      if(ans==arr[i]){
        count++;
      }
      else{
        count--;
      }
    }
    cout<<"maj element is "<<ans;
    return 0;
}