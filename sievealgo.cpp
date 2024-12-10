#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>isprime(N,1);
int main(){
isprime[0]=isprime[1]=false;
for(int i=0;i<N;i++){
    if(isprime[i]==true)
    for(int j=2*i;j<N;j+=i ){
        isprime[j]=false;
    }
}
// for(int i=0;i<100;i++){
//     cout<<isprime[i]<<endl;
// }
int q;
cin>>q;
while(q--){
    int num;
    cin>>num;
    if(isprime[num]){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
}

