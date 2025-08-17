#include<iostream>
using namespace std;
void printn(int i,int n){
    if(i>n)return;
    printn(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    printn(1,n);
    return 0;
}