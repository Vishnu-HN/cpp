#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(3);
    st.insert(2);
    st.insert(1);
    st.insert(5);
    for(auto it =st.begin();it!=st.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<endl;
    auto i = st.find(4);
    st.erase(i);
    for(auto it =st.begin();it!=st.end();it++)
    {
        cout<<*it<<" "; 
    }
    return 0;
}