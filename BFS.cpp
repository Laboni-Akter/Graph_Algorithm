#include<bits/stdc++.h>
using namespace std;
#define mx 100000
bool visited[mx];
vector<int> g[mx];
queue<int> q;
void bfs(int u)
{
    visited[u]=true;
    cout<<u<<endl;
    q.push(u);
    int s;
    while(!q.empty())
    {
        s = q.front();
        q.pop();
        for(auto v: g[s])
        {
            if(!visited[v])
            {
                visited[v]=true;
                cout<<v<<endl;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int root;
    cin>>root;
    bfs(root);
}
