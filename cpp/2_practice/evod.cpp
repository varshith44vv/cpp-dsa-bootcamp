#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int even=0;
    int odd=0;

    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    for(int i: vec){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"even is "<<even<<endl;
    cout<<"odd is "<<odd<<endl;
    return 0;
}