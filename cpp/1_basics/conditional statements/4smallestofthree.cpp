#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
   if(a<b && a<c){
cout<<"a is min"<<endl;
    }
else if(b<c && b<a){
cout<<"b is min"<<endl;
    }
    else{
cout<<"c is min"<<endl;
    }
    return 0;
}