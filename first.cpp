#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>a;
    queue<int>d;
    d.push(1);
    d.push(10);
    a.push(2);
    a.push(3);
    a.push(4);
    while(!d.empty()){
        cout<<d.front()<<endl;
        d.pop();
    }
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
}