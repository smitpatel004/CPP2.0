#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    if(vis[vertex])return;
    vis[vertex]=true;
    for(int child:g[vertex]){
        // cout<<"par"<<vertex<<"child"<<child<<endl;
        // if(vis[child]==1)continue;
        dfs(child);
    }
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
for(int i=1;i<=n;i++){
    if(vis[i])continue;
    dfs(i);
    cnt++;
}
cout<<cnt;


}
