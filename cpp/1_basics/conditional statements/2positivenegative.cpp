#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num>0){
        cout<<"its positiv\n";
    }
    else if(num<0){
        cout<<"its negative\n";
    }
    else{
        cout<<"its zero\n";
    }
    return 0;
}