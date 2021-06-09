/* Hackerearth graph DFS problem Counting connected components
    link: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> ar[100001];
int vis[100001];

void dfs(int node)
{
    vis[node] = 1;
    for (int child : ar[node])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int ver, edg, a, b;
    cin >> ver >> edg;
    for (int i = 1; i <= edg; i++)
    {
        cin >> a >> b, ar[a].push_back(b), ar[b].push_back(a);
    }
    int cc = 0;
    for (int i = 1; i <= ver; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i), cc++;
        }
    }
    cout << cc;
}
