#include<iostream>
using namespace std;
void pattern13(int n){
    int count=1;
   for(int i =0;i<n;i++){ 
    for(int j =0;j<=i;j++){
    cout<<count<<" ";
    count++;
}

    cout<<endl;
   }

}



int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern13(n);
    return 0;
}