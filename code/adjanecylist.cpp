// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			<< v << "\n head ";
		for (auto x : adj[v])
		cout << "-> " << x;
		printf("\n");
	}
}


void dfs(vector<int> adj[],int v)
{
     bool visited[100]={false};
     stack<int> s;
     s.push(v);
     while(!s.empty())
     {
         v=s.top();
         s.pop();

          if (!visited[v])
        {
            cout<<"DFS==> ";
            cout << v << " ";
            visited[v] = true;
        }
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                s.push(*i);
     }
     cout<<endl;
}
void bfs(vector<int> adj[],int v)
{
    queue<int> q;
    q.push(v);
    bool vis[100]={false};
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<"BFS==>";
        cout<<node<<" ";
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                vis[it]=true;
                q.push(it);
            }
        }
    }
}


// Driver code
int main()
{
	int V = 10;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 0);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 3);


	printGraph(adj, V);
	dfs(adj,2);
	bfs(adj,2);


	return 0;
}
