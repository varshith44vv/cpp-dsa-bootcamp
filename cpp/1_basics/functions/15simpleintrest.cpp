 #include<iostream>
using namespace std;
int si(int p, int r, int n){
    return (p*n*r)/100;
}
int main(){
    int p,n,r;
    int sins;
    cin>>p>>n>>r;
    sins=si(p,n,r);
    cout<<"simple intrest is "<<sins;
    return 0;
}