#include<iostream>
using namespace std;
void symmetrytriangle(int n){
  for (int i =0;i<n;i++){
    for(int j = 0;j<n-i;j++){
       cout<<"*";
    }
    for(int j = 0;j<2*i;j++){
       cout<<" ";
    }
    for(int j = 0;j<n-i;j++){
       cout<<"*";
    }
  cout<<endl;
}
  for (int i =0;i<n;i++){
    for(int j = 0;j<=i;j++){
       cout<<"*";
    }
    for(int j = 0;j<2*(n-1)-(2*i);j++){
       cout<<" ";
    }
    for(int j = 0;j<=i;j++){
       cout<<"*";
    }
  cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    symmetrytriangle(n);
    return 0;
}