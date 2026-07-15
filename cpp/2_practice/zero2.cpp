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
    int i=0;
    int end=n;
   while(i<end){
    if(arr[i]==0){
      for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
      }
      arr[n-1]=0;
      end--;
    }
    else{
        i++;
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }
return 0;
}