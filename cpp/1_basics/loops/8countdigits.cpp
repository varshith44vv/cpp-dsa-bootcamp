#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cin>>num;
    for(int i=1;i<=15;i++){
        if(num==0)
{
    break;
}        
        num=num/10;
        count++;
    }
    cout<<"number of digits is " <<count;
    return 0;
}