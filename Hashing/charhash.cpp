#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="abghhabcfm";
    int hash[255]={0};
    for (int i = 0; i < s.length(); i++)
    {
       hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}