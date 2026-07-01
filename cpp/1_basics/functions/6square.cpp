#include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
int main(){
    int a;
    int sq;
    cin>>a;
    sq=square(a);
    cout<<"square is "<<sq;
    return 0;
}