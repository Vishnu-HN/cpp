#include<iostream>
using namespace std;
void Alphabettriangle(int n){
   for(int i =n;i>0;i--){
    for(char j = 'A';j<'A'+i;j++){
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