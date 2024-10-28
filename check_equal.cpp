#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isBalanced(string s) {
 stack<char>a;
 for(char brackets:s){
    if(symbols[brackets]<0){
        a.push(brackets);
    }
    else{
        if(a.empty()) return "NO";
        char top = a.top();
        a.pop();
        if(symbols[top]+symbols[brackets]!=0){
            return "NO";
        }
    }
 }
 if(a.empty())return "YES";
 return "NO";

}

int main(){
   
    int t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    
}