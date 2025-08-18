#include<iostream>
using namespace std;
void print(int i,int n){
    if(i+1>n) return;
    cout<<"Vishnu"<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    print(0,n);
    return 0;
}