#include<iostream>
using namespace std;
void invertedtriangle(int n){
   for(int i =1;i<=n;i++){
    for(int j =0;j<n-i+1;j++){
    cout<<"* ";
}
    cout<<endl;
   }

}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    invertedtriangle(n);
    return 0;
}