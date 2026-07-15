#include<iostream>
using namespace std;
int main(){
    int x;
    int ans=1;
    int n;
    cin>>x;
    cin>>n;
    while(n>0){
        if(n%2==1){
            ans=ans*x;
        }
        x=x*x;
        n=n/2;
    }
    cout<<"answer is"<<ans;
    return 0;
}