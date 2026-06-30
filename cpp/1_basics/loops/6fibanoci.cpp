#include<iostream>
using namespace std;
int main(){
    int n,c;
    int a=0;
    int b=1;
    cout<<"fibanoci series till \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}