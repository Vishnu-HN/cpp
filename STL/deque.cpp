#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    for(auto it =dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back();
    return 0;
}