#include<iostream>
using namespace std;
int main(){
    int num,r;
    int sum=0;
    cin>>num;
    for(int i=1;i<=15;i++){
        if(num==0)
{
    break;
}        r=num%10;
        num=num/10;
        sum=sum+r;
    }cout<<"sum of digits is "<<sum;
    return 0;
}