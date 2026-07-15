#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers find gcd : ";
    cin>>n1>>n2;
    int gcd;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    cout<<"GCD of "<<n1<<" and "<<n2<<" is : "<<gcd<<endl;
    return 0;
}