#include<iostream>
using namespace std;
int divide(int a, int b ){
    return a/b;
}
int main(){
    int a;
    int b;
    int div;
    cin>>a;
    cin>>b;
    div=divide(a,b);
    cout<<"division is "<<div;
    return 0;
}