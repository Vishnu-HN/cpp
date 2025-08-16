// #include <iostream>
// using namespace std;

// int fact(int i, int n) {
//     if (i == 0) return n; // Base case: return the result
//     return fact(i - 1, n * i); // Multiply and recurse
// }

// int main() {
//     int i;
//     cout << "Enter the value of n : ";
//     cin >> i;
//     cout << fact(i, 1); 
//     return 0;
// }3
//OR
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
   return n* fact(n-1);
}
int main(){
    cout<<fact(5);
    return 0;
}