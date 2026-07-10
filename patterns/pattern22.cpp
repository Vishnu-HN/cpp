#include<iostream>
using namespace std;
void Square(int n){
  for (int i =0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
             int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n-minDist) << " ";
    }
   
    cout<<endl;
  }

}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Square(n);
    return 0;
}