#include<iostream>
#include<cmath>
using namespace std;
int bintodec(int a){
    int r;
    int k=0;
    int i=0;
    while(a>0){
        r=a%10;
        k=k+r*pow(2,i);
        i++;
        a=a/10;
    }cout<<k<<endl;
    return k;
}
int main(){
    int a;
    int k;
    cin>>a;
    k=bintodec(a);
   cout<<"the value is"<<k;
return 0;
}