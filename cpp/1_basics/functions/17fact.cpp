#include<iostream>
using namespace std;
int fact(int a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    int a,k;
    cin>>a;
    k=fact(a);

    cout<<"facttorial is "<<k;
    return 0;
}