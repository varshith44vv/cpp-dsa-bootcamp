#include<iostream>
using namespace std;
int fiba(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fiba(n-1)+fiba(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fiba(i);
    }
    return 0;
}