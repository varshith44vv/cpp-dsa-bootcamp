#include<iostream>
#include<cmath>
using namespace std;
int dectobin(int a){
    int r;
    int i=0;
    int k=0;
    while(a>0){
    r=a%2;
    k=k+r*pow(10,i);
    i++;
    a=a/2;
    }
    return k;
}
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    cout<<"the bin value  is"<<dectobin(i)<<endl;
    }
return 0;
}