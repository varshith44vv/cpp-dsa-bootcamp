#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,4,8,7,9};
    int even=0;
    int odd=0;
    for(int i=0;i<=5;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"even is"<<even<<endl;
     cout<<"odd is"<<odd<<endl;
    return 0;
}