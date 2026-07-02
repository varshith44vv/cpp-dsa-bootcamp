#include<iostream>
using namespace std;
int prime(int a){
    int count=0;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int a;
    cin>>a;
    for(int i=2;i<=a;i++){
    if(prime(i)==0){
        cout<<i;
    }
}
    return 0;
}