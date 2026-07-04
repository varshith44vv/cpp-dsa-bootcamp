#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,6,-4,0,7,9};
    int pos=0;
    int neg=0;
    int zero=0;
    for(int i=0;i<=5;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    cout<<"positive is"<<pos<<endl;
     cout<<"negative is"<<neg<<endl;
      cout<<"zero elements is"<<zero<<endl;
    return 0;
}