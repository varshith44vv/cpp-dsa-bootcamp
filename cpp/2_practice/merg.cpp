#include<iostream>
using namespace std;
int main(){
    int n,m;
    int key;
    cin>>n;
    cin>>m;
    int arr[n];
    int kar[m];
    int k;
    k=n+m;
    int merg[k];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>kar[i];
    }
    for(int i=0;i<k;i++){
        if(i<n){
            merg[i]=arr[i];
        }
        else{
            merg[i]=kar[i-n];
        }
    }
    for(int i=0;i<k;i++){
        cout<<merg[i];
    }
return 0;
}