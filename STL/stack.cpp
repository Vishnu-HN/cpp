#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    int n = s.size();
    cout<<s.empty()<<endl;
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<s.empty()<<endl;
    return 0;
}   