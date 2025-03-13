#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;
int bfs(vector<vector<int>>& graph, int start, vector<bool>& visited)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int count = 1;
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int next : graph[node])
        {
            if(!visited[next])
            {
                visited[next] = true;
                q.push(next);
                count ++;
            }
        }
    }
    return count;
}
int solution(int n, vector<vector<int>> wires) {
    int answer = n;
    for(int i = 0; i < wires.size(); i++)
    {
        vector<vector<int>> graph(n+1);
        
        for(int j = 0; j < wires.size(); j++)
        {
            if(i == j) continue;
            graph[wires[j][0]].push_back(wires[j][1]);
            graph[wires[j][1]].push_back(wires[j][0]);
        }
        
        vector<bool> visited(n+1, false);
        
        int count1 = bfs(graph, 1, visited);
        int count2 = n - count1;
        int diff = abs(count1 - count2);
        
        answer = min(diff, answer);
        }
    
    return answer;
}