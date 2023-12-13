#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 2e5 + 5;
int n,e;
vector<int> adj[N];
void read_graph()
{
    cin >> n >> e;
    while(e--)
    {
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void bfs(int u,int *level,bool *visited)
{
    visited[u] = true;
    level[u] = 0;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        for(auto v : adj[current])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[current] + 1;
            }
        }
    }
    cout << -1 << endl;
}
void solution(){
    for(int i=0;i<N;i++){
        adj[i].clear();
    }
    bool visited[N] = {false};
    read_graph();
    int level[N] = {0};
    bfs(1,level,visited);
    int flag = level[1];
    bool valid = true;
    cout << "level : " << level[1] << " ";
    for(int i=2;i<=n;i++)
    {
        cout << level[i];
        valid &= (level[i] == flag);
    }
    if(valid)
    cout << 2 << endl;
    else{
        cout << -1 << endl;
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}