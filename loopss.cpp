#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex,int par){
    if(vis[vertex])return;
    vis[vertex]=true;
    bool isloopexists=false;
    for(int child:g[vertex]){
        // cout<<"par"<<vertex<<"child"<<child<<endl;
        if(vis[child]&& child==par )continue;
        if(vis[child])return true;
       isloopexists|= dfs(child,vertex);
    }
    return isloopexists;
}

int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int v1,v2;
    cin>>v1>>v2;
   g[v1].push_back(v2);
      g[v2].push_back(v1);


}
int cnt=0;
bool isloop=false;
for(int i=1;i<=n;i++){
    if(vis[i])continue;
    if(dfs(i,0)){
        isloop=true;
        break;
    }
 
   
}
cout<<isloop;


}
