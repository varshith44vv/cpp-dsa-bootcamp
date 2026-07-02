#include<iostream>
using namespace std;
int power(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    return p;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<"power of a to b is "<<power(a,b);
    return 0;
}