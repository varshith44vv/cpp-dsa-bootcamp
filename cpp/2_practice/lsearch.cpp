#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int arr[]={2,3,5,6,4,1,9};
    for(int i=0;i<7;i++){
        if(key==arr[i]){
            cout<<"element is at "<<i;
        }
    }
    return 0;
}