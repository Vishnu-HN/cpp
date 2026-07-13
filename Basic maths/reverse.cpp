#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numeber to reverse: ";
    cin>>n;
    int ld;
    int rev =0;
    while(n>0){
        ld= n%10;
        n=n/10;
        rev=(rev*10)+ld;
    }
    cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}