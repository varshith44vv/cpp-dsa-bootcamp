#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"required fact\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factoriaal of"<<n<<"is"<<fact;
    return 0;
}