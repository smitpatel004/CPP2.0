#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
printBinary(9);
int a=9;
int i=0;
if((a&(1<<i))!=0){
cout<<"set bit";
}
else{
    cout<<"no set";
}
printBinary(a|(1<<1));
printBinary(a^(1<<1));
printBinary(a&(~(1<<3)));
int cnt=0;
for(int i =31 ;i>=0;i--){
    if((a&(1<<i))!=0){
        cnt++;
    }
}
cout<<cnt;
cout<<__builtin_popcount(a);
}