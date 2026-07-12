#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int target=8;
int sum=0;
int j=5-1;
int i=0;
while(i<4){
    sum=arr[i]+arr[j];
    if(sum>target){
        j--;
    }
    else if(sum<target){
        i++;
    }
    else{
        cout<<"the pair is "<<arr[i]<<","<<arr[j];
        break;
    }
}
return 0;
}