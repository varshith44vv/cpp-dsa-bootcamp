#include<iostream>
using namespace std;
void arradd(int arr[],int size){
    arr=arr+1;
    cout<<arr[1];
}
int main(){
    int arr[]={2,4,6};
    arradd(arr,3);
    return 0;
}