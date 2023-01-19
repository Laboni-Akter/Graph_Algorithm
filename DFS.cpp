#include<bits/stdc++.h>
using namespace std;
#define mx 100000
bool visited[mx];
int parent[mx];
vector<int> g[mx];
void dfs(int u)
{
    visited[u]=1;
    cout<<u<<endl;
    for(int v: g[u])
    {
        if(!visited[v])
        {
            dfs(v);
            parent[v]=u;
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
    int p;
    cin>>p;
    dfs(p);
   /* for(int i=1;i<=n;i++)
    {
        for(auto v: g[i])
        {
            cout<<v;
        }
    }
    cout<<endl;*/
    //or
    /*for(int i=1;i<=n;i++)
    {
        for(int v=0;v<g[i].size();v++)
        {
            cout<<g[i][v];
        }
    }
    cout<<endl;*/
    //or
    //vector<int>:: iterator it;
    /*for(int i=0;i<n;i++)
    {
        auto it = g[i].begin();
        for(;it!=g[i].end();it++)
        {
            cout<<*it<<endl;
        }
    }*/
}

