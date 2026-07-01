#include<iostream>
using namespace std;
void uporlo(char a){
    if(a>'A' && a<'Z'){
        cout<<"its uppercase";
    }
    else if(a>'a' && a<'z'){
        cout<<"its lower";
    }
    else{
        cout<<"inavlid input";
    }
}
int main(){
    char a;
    cin>>a;
    uporlo(a);
    return 0;
}