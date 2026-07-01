#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a;
    int b;
    int max1;
    cin>>a;
    cin>>b;
    max1=max(a,b);
    cout<<"the max value is "<<max1;
    return 0;
}