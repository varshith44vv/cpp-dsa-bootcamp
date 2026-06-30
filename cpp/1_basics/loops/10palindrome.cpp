#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    int count=0;
    int r;
    int num2=0;
    cin>>num;
    int num1 =num;
    int num3 =num;

    for(int i=1;i<=15;i++){
        if(num==0)
{
    break;
}        
        num=num/10;
        count++;
    }
    cout<<"number of digits is " <<count<<endl;
    int j=count-1;
for(int i=1;i<=count;i++){
r=num1 % 10;
num1=num1/10;
num2=num2+(r*(int)pow(10,j));
j--;
}
if(num3==num2){
    cout<<"its a palindrome";
}
else{
    cout<<"its not a palindrome"<<num2;
}
return 0;
}