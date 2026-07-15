#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 2 values to find gcd : ";
    cin>>a>>b;
    while(a!=0 && b!=0){
        if(a>b) a = a % b;
        else b = b % a; 
    }
    if (a==0)cout<<b<<" is the GCD";
    else cout<<a<<" is the GCD";
    return 0;
}