#include<iostream>
using namespace std;
void evenorodd(int a){
    if(a%2==0){
        cout<<"its even";
    }
    else{
        cout<<"its odd";
    }
}
int main(){
    int a;
    cin>>a;
    evenorodd(a);
    return 0;
}