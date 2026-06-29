#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
   if(a>b && a>c){
cout<<"a is max"<<endl;
    }
else if(b>c && b>a){
cout<<"b is max"<<endl;
    }
    else{
cout<<"c is max"<<endl;
    }
    return 0;
}