#include<iostream>
#include<cmath>
using namespace std;
int count(int a){
    int r=0;
    while(a>0){
r++;
a=a/10;
    }cout<<r<<endl;
    return r;
}
int rev(int a,int count){
    int k=0;
    int r;
    for(int i=count-1;i>=0;i--){
        r=a%10;
        a=a/10;
        k=k+r*pow(10,i);
    }cout<<k<<endl;
    return k;
}
int main(){
    int num;
    cin>>num;
    int count1=count(num);
    if(num==rev(num,count1)){
        cout<<"its a palindrome";
    }
    else{
        cout<<"its not a palindrome";
    }
    return 0;
}