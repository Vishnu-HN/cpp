#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    cout<<q.back()<<endl;
    q.back()+=5;
    cout<<q.back()<<endl;

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
    cout<<q.empty()<<endl;
    return 0;
}   