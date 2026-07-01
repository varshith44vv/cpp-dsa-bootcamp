#include<iostream>
using namespace std;
int add(int a, int b ){
    return a+b;
}
int main(){
    int a;
    int b;
    int sum;
    cin>>a;
    cin>>b;
    sum=add(a,b);
    cout<<"sum is "<<sum;
    return 0;
}