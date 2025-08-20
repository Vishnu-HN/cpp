#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for (int i = n-1; i >0; i--)
    {
        int swapdone =0;
        for (int j = 0; j<i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapdone=1;
            }
        }
        if(swapdone==0){
            break;
        }
        
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
     bubble_sort(arr,n);
    return 0;
}