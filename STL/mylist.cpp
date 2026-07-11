#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(1);
    ls.push_front(2);
    ls.emplace_back(3);
    ls.emplace_front(4);
    for(auto i:ls){
        cout<<i<<" ";
    }
    return 0;
}
