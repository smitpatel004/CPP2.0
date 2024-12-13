// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;
// vector<int> g[N];
// bool vis[N];
// int depth[N];
// int height[N];
// void dfs(int vertex,int parent){
//     // if(vis[vertex])return;
//     // vis[vertex]=true;
//     for(int child:g[vertex]){
//         // cout<<"par"<<vertex<<"child"<<child<<endl;
//        if (child == parent) continue;

//         depth[child]=depth[vertex]+1;
//         dfs(child,vertex);
//         height[vertex]=max(height[vertex],height[child]+1);
//     }
// }

// int main(){
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     int v1,v2;
//     cin>>v1>>v2;
//    g[v1].push_back(v2);
//       g[v2].push_back(v1);


// }
// dfs(1,0);
// for(int i=0;i<=n-1;i++){
//     cout<<depth[i]<<" "<<height[i]<<endl;
// }

// }
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int depth[N];  // Depth of each node
int height[N]; // Height of each node from the lowest child

void dfs(int vertex, int parent) {
    for (int child : g[vertex]) {
        // Skip the parent node
        if (child == parent) continue;

        // Update depth of child
        depth[child] = depth[vertex] + 1;

        // Recursively perform DFS on the child node
        dfs(child, vertex);

        // Update height of the current vertex based on the child's height
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}

int main() {
    int n;
    cin >> n;

    // Read the graph edges
    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    // Perform DFS starting from node 1 (assuming 1-based index)
    dfs(1, 0);

    // Output the depth and height of each node
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": Depth = " << depth[i] << ", Height = " << height[i] << endl;
    }

    return 0;
}
