#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str ="123";
    int num;
    char comma;
    stringstream ss(str);
    ss>>num;
    cout<<num<<endl;
    return 0;
}