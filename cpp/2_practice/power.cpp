#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"enter base"<<endl;
    cin>>x;
    cout<<"enter power"<<endl;
    cin>>n;
    int pow=1;
    for(int i=1;i<=n;i++){
        pow=pow*x;
    }
    cout<<"answer is "<<pow;
    return 0;

    
}