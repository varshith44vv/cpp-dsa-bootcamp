#include<iostream>
using namespace std;
void printn(int a){
    int r=0;
    while(a>0){
r++;
a=a/10;
    }
    cout<<r;
}
int main(){
    int a;
    cin>>a;
    printn(a);
    return 0;
}