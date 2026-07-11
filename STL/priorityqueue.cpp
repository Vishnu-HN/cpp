#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.emplace(20);
    pq.push(15);
    pq.push(5);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(10);   
    pq2.push(15);   
    pq2.push(0);   
    pq2.push(18);   
    pq2.emplace(20);
    cout<<pq2.top()<<endl;
    return 0;
}