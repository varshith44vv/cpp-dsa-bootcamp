#include<iostream>
using namespace std;
int subb(int a, int b ){
    return a-b;
}
int main(){
    int a;
    int b;
    int sub;
    cin>>a;
    cin>>b;
    sub=subb(a,b);
    cout<<"sub is "<<sub;
    return 0;
}