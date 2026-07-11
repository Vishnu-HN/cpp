#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>::iterator it = v.begin();
    cout<<v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back()<<endl;
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //Using auto
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //Using foreach
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    vector<int>v1={10,20,30};
    v1.erase(v1.begin()+1);
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    v1.pop_back();
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+1,2,200);
     for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    vector<int>v2;
    vector<int>v3(10,100);
    v2.insert(v2.begin(),v3.begin(),v3.end());
    for(auto element:v2){
        cout<<element<<" ";
    }
    return 0;
}