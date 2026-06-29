#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
        cout<<"its a vowel";

    }
    else{
        cout<<"its a consonant";
    }
    return 0;
}