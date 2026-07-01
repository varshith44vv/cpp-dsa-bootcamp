#include<iostream>
using namespace std;
int cube(int a){
    return a*a*a;
}
int main(){
    int a;
    int cu;
    cin>>a;
    cu=cube(a);
    cout<<"cube is "<<cube(a);
    return 0;
}