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
    if(prime(a)==0){
        cout<<"its prime";
    }
    else{
        cout<<"its not a prime";
    }
    return 0;
}