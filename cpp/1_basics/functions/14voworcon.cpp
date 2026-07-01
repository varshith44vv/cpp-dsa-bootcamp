#include<iostream>
using namespace std;
void voworcon(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        cout<<"its uppercase";
    }
    else{
        cout<<"consonant";
    }
}
int main(){
    char a;
    cin>>a;
    voworcon(a);
    return 0;
}//we can include uppercase also, by keeping more || ooperations.
//we can also include invalid input option by checking wheher the iput is a alphabet