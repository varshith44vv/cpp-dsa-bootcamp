#include<iostream>
using namespace std;
void posneg(int a){
    if(a>0){
        cout<<"its positive\n";
    }
    else if(a<0){
        cout<<"its negative\n";
    }
    else{
        cout<<"its zero\n";
    }
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    posneg(a);
    posneg(b);
    return 0;
}