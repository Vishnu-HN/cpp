#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int hash[13]={0};
    for (int i = 0; i <n; i++)
    {
       hash[arr[i]]++;
    }
    
    int q;
    cin>>q;
    /*Below code can also written in this way
    while(q>0){
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
    q--;
    }
    Both are same*/
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}