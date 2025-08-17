//Parameterized recursion
// #include<iostream>
// using namespace std;
// int summ(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return 0;
//     }
//     summ(i-1,sum+i);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     summ(n,0);
//     return 0;
// }
// Functional Recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
}
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
   cout<< fun(n);
    return 0;
}
