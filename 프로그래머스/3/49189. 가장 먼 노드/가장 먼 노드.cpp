#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<vector<int>> adj(n + 1);
    for (auto e : edge) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]); // 양방향!
    }

    queue<pair<int, int>> q;
    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, 0);

    q.push({1, 0});
    visited[1] = true;

    int maxDist = 0;

    while (!q.empty()) {
        int cur = q.front().first;
        int cnt = q.front().second;
        q.pop();

        maxDist = max(maxDist, cnt);
        dist[cur] = cnt;

        for (int next : adj[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push({next, cnt + 1});
            }
        }
    }

    // 가장 먼 거리인 노드 개수 세기
    for (int d : dist) {
        if (d == maxDist) answer++;
    }

    return answer;
}
