#include<iostream>
using namespace std;
void printn(int a){
    for(int i=1;i<=a;i++){
        cout<<i;
    }
}
int main(){
    int a;
    cin>>a;
    printn(a);
    return 0;
}
