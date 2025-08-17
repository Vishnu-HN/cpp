 #include<iostream>
 #include<algorithm>
 using namespace std;
 void fun(int i,int arr[],int n ){
      if(i>=(n/2)) return;
      swap(arr[i],arr[n-i-1]);
      fun(i+1,arr,n);
 }
 int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array values: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    fun(0,arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
    return 0;
 }