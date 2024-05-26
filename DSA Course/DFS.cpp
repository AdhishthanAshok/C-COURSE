#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex)
{
    /*TAKE ACTION ONVERTEX AFTER ECTERING THE VERTEX*/
    // if(vis[vertex]) return; we can check the line 15 if statement here also , before entering the vertex
        cout << vertex << endl;
        vis[vertex] = true;
        for (int child : graph[vertex])
        {
            cout << "parent : " << vertex << " Child : " << child << endl;
            if (vis[child])
                continue;
            /*TAKE ACTION ON CHILD BEFORE ECTERING THE CHILD NODE*/
            dfs(child);
            /*TAKE ACTION ON CHILD AFTER EXITING CHILD NODE*/
        }
    /*TAKE ACTION ON VERTEX BEFORE EXITING THE VERTEX*/
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    fill(vis, vis + N, false); // make all vis values false another method to do this , is to make a loop and make false for every value
    cout << "DFS traversal starting from vertex 0:" << endl;
    dfs(1); // for connected components counting , just run this in a loop 'n' times , and increment the count whenever a new vertice is reached , else continue
    return 0;
}