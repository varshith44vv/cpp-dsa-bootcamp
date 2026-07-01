#include<iostream>
using namespace std;
void printn(int a){
    for(int i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<a*i;
        cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    printn(a);
    return 0;
}