#include<iostream>
using namespace std;
int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    return 0;
}
int main(){
    int n;
    int temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int st=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        if(st>=end){
            break;
        }
        else{
            temp=arr[st];
            arr[st]=arr[end];
            arr[end]=temp;
        }
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}