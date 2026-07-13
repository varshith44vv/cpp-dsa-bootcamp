#include<iostream>
using namespace std;
int main(){
    int  arr[]={1,2,2,1,1};
    for(int i=0;i<5;i++){
        int count=0;
        for(int j=0;j<5;j++){
            if(arr[i]=arr[j]){
                count++;
            }

        }
        if(count>2){
            cout<<"majority element is "<<arr[i];
            break;
        }
    }
    return 0;
}