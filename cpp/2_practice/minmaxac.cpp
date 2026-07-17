#include<iostream>
using namespace std;
int main(){
    int min1= INT_MAX;
    int max1= INT_MIN;
    int n;
     int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for(int i=0;i<n;i++){
        min1=min(min1,arr[i]);
        max1=max(max1,arr[i]);
    }
    cout<<"max is"<<max1<<endl;
    cout<<"min is"<<min1;
    return 0;
}