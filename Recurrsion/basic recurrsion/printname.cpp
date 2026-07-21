#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n){
   if(n<i) return ;
   cout<<"Aditya"<<endl;
   fun(i+1,n); 
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    fun(1,n);
    return 0;
}