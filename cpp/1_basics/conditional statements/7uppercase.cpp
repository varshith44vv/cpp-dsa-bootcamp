#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"its a lowercase";
    }
    else if(c>='A'&&c<='Z'){
        cout<<"its a uppercase";
    }
    else{
        cout<<"invalid input";
    
    }
    return 0;

}