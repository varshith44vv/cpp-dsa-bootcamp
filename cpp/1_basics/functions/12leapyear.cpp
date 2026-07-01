#include<iostream>
using namespace std;
void leap(int a){
    if(a%4==0){
       cout<<"its leap year";
    }
    else{
        cout<<"its not leap year";
    }
}
int main(){
    int a;
    cin>>a;
    leap(a);
    return 0;
}