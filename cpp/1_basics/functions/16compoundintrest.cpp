 #include<iostream>
 #include<cmath>
using namespace std;
float ci(int p, float r, int n){
    float k=1+r/100;
    return (p*pow(k,n))-p;
}
int main(){
    int p,n;
    float r;
    float cins;
    cin>>p>>n>>r;
    cins=ci(p,r,n);
    cout<<"compound intrest is "<<cins;
    return 0;
}