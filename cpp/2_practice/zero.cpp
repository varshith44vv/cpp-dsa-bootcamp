#include<iostream>
using namespace std;
void swap(int arr1[],int a,int b){
    int temp;
    temp=arr1[a];
    arr1[a]=arr1[b];
    arr1[b]=temp;

}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    k=0;
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
      swap(arr,k,i);
      k++;
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }
return 0;
}