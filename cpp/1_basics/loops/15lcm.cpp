#include<iostream>
using namespace std;
int main(){
    int a;
    int b,lcm;
    cin>>a;
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=a;j++){
            if(a*i==b*j){
                cout<<"lcm is "<<a*i<<endl;
                lcm=a*i;
                break;
            }
            
        }
        if(lcm==a*i){
                break;
            }
    }
    return 0;
}