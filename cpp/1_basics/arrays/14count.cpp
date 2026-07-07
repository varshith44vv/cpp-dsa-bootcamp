#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        key=arr[j];
         int count=0;
        for(int i=0;i<n;i++){
        if(key==arr[i]){
            count++;
        }

    }
    cout<<key<<"element occured "<<count<<"times"<<endl;
}
return 0;
}