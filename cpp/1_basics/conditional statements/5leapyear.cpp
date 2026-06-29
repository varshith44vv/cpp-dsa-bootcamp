#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"its leap year"<<endl;
    }
    else{
        cout<<"its not leap year"<<endl;
    }
    return 0;
}