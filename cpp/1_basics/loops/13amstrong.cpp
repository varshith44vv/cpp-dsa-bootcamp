#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num,r,num1,num2;
    cin>>num;
    int count=0;
    num1=num;
    num2=num;
    int num3=0;
    for(int i=1;i<=10;i++){
        
        num1=num1/10;
        count++;
        if(num1==0){
            break;
        }
    }cout<<"count is"<<count<<endl;
    for(int i=1;i<=10;i++){
r=num2%10;
num2=num2/10;
num3=num3+pow(r,count);
    }
    if(num3==num){
        cout<<"its an amstronng number";
    }
    else{
         cout<<"its not an amstronng number";
    }
    return 0;
}