#include<iostream>
using namespace std;
void printn(int a){
    int r;
    while(a>0){
r=a%10;
a=a/10;
cout<<r;
    }
}
int main(){
    int a;
    cin>>a;
    printn(a);
    return 0;
}