#include<iostream>
using namespace std;
void Alphabettriangle(int n){
   int a =0;
   for(char i ='A';i<'A'+n;i++){
    for(int j = 0;j<=a;j++){
        if(a<n){
        cout<<i<<" ";
        }
    }
    cout<<endl;
     a++;
   }

}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Alphabettriangle(n);
    return 0;
}