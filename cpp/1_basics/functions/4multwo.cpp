#include<iostream>
using namespace std;
int mull(int a, int b ){
    return a*b;
}
int main(){
    int a;
    int b;
    int mul;
    cin>>a;
    cin>>b;
    mul=mull(a,b);
    cout<<"mul is "<<mul;
    return 0;
}