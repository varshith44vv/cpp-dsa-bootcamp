#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count;
    cout<<"prime numbers till n are \n";
    for(int i=2;i<=n;i++){
         count=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            count++;
        }     
    }
    if(count==0){
            cout<<i;
        }
}
return 0;
}