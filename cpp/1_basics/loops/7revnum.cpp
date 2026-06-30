#include<iostream>
using namespace std;
int main(){
    int num,r;
    cin>>num;
    for(int i=1;i<=15;i++){
        if(num==0)
{
    break;
}        r=num%10;
        num=num/10;
        cout<<r;
    }
    return 0;
}