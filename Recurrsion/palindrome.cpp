#include<bits/stdc++.h>
using namespace std;
string palindrome(string s,int i,int n){
 if(i>=(n/2)) return "true";
 if(s[i]!=s[n-i-1]) return "false";
 return palindrome(s,i+1,n);

}
int main(){
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    int n = s.length();
    cout<<palindrome(s,0,n)<<", It is palindrome";
    return 0;
}