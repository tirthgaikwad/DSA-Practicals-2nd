#include <iostream>
#include <string>
int n;
char city[20];
int adj[20][20];
int visited[20];
void dfs(int val)
{
    visited[val] = 1;
    for (int i = 0; i < n; i++)
    {
        if (adj[val][i] != 0 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}
using namespace std;
int main()
{
    cout << "how many cities you want to add: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter city" << i + 1 << ": ";
        cin >> city[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }

    int edge, cost;
    cout << "Enter the no of flights paths: ";
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cout << "Enter the city indexes(0 to " << n - 1
             << ")And enter cost: ";
        cin >> u >> v >> cost;
        adj[u][v] = cost;
        adj[v][u] = cost;
    }
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    dfs(0);
    int connected = 1;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            connected = 0;
            break;
        }
    }
    if (connected == 1)
        cout << "\nGraph is Connected.";
    else
        cout << "\nGraph is Not Connected.";

    return 0;
}
