#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    if(a>b && a>c){
     return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a;
    int b;
    int c;
    int max;
    cin>>a>>b>>c;
  cout<<"maximum is "<<maxthree(a,b,c);
    return 0;
}