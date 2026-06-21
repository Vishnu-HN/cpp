#include<iostream>
using namespace std;
void fun(int n){
    int m =n;
   for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
    cout<<"*";
    m--;
   }
  
    cout<<endl;
 
   }
  
}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fun(n);
    return 0;
}