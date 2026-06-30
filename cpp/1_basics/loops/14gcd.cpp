#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int c;
    if(a<b){
c=a;a=b;b=c;
    };
    for(int i=1;i<=20;i++){
c=a%b;

if(c==0){
    cout<<"gcd is"<<b<<endl;
    break;
}
a=b;
b=c;
    }
    return 0;
}