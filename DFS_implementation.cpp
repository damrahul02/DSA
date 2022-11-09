#include <bits/stdc++.h>
using namespace std;
void dfs_visit(vector<int>graph[],int color[],int node,int u)
{
    cout<<u<<" ";//printing visiting Node;
    color[u]= {1};
    for (auto v:graph[u])
    {
        if (color[v]==0)
            dfs_visit(graph,color,node,v);
    }
}
void dfs(vector<int>graph[],int node)
{
    int color[node+1]= {0};
    for (int i=1; i<=node; i++)
    {
        if (color[i]==0)
            dfs_visit(graph,color,node,i);
    }
}
int main()
{
    int node,edge;
    cout<<"Enter Number of Node: ";
    cin>>node;
    cout<<"Enter Number of Edge: ";
    cin>>edge;
    vector<int>graph[node+1];
    cout<<"Enter all the edges of your graph: ";
    for (int i=0; i<edge; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
    }
    cout<<endl<<"Adjacency List of Your input Graph is Shown Below...\n";
    for (int i=1; i<=node; i++)
    {
        cout<<i<<" -> { ";
        for (auto j:graph[i])
        {
            cout<<j<<" ";

        }
        cout<<"}"<<endl;
    }
    cout<<endl<<"Printing The Visited Node: ";

    dfs(graph,node);
    cout<<endl;
}

