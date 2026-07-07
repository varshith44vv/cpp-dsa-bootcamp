#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    cin>>key;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"the first occurence key element is at "<<i;
            break;
        }
    }

return 0;
}
