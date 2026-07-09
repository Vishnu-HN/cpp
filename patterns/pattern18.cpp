#include<iostream>
using namespace std;
void Alphabettriangle(int n){
  for (int i =0;i<n;i++){
        char ch = 'A'+(n-1);
    for(char j=ch-i;j<=ch;j++){
     cout<<j<<" ";
    
  }
  cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Alphabettriangle(n);
    return 0;
}