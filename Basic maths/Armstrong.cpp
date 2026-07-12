#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numeber to reverse: ";
    cin>>n;
    int d=n;
    int ld;
    int sum=0;
    int count =0;
    while(n>0){
        n=n/10;
        count++;
    }
    int num =d;
    while(d>0){
        ld=d%10;
        sum= sum+pow(ld,count);
        d=d/10;

    }
    cout<<sum<<endl;
    if(sum==num){
        cout<<"Yes !"<<sum<<"It is an armstrong number";
    }
    else{
        cout<<"No !"<<num<<"is, Not an armstrong number";
    }

    
    
   
    return 0;
}