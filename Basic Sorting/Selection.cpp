#include<bits/stdc++.h>
using namespace std;
void selction_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
       int mini=i;
       for (int j = i+1; j < n; j++)
       {
        if(arr[j]<arr[mini]) mini =j;
       }
       swap(arr[i],arr[mini]);
       
    }
    cout<<"Sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     selction_sort(arr,n);
    return 0;
}