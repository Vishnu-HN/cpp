#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements for an array ";
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   cout<<endl;
   for(int i=0;i<n;i++){
     cout<<arr[i];
   }
    return 0;
}