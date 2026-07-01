#include<iostream>
using namespace std;
void printn(int a){
    int sum =0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"sum is "<< sum;
}
int main(){
    int a;
    cin>>a;
    printn(a);
    return 0;
}