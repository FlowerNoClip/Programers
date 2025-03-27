#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int bfs(int x, int y, vector<vector<int>>& adj, vector<vector<bool>>& isVisited, int&n, int& m) {
    queue<pair<int, int>> q;
    q.push({x, y});
    isVisited[x][y] = true;  // 현재 위치 방문 처리
    
    
    int dx[] = {1, -1, 0, 0};  // 이동 방향 (오른쪽, 왼쪽, 아래, 위)
    int dy[] = {0, 0, 1, -1};
    
    int distance = 0;
    while(!q.empty())
    {
        int size = q.size();
        
        for(int i = 0; i <size; i++)
        {
            auto p = q.front();
            
            q.pop();
            
            int currentX = p.first;
            int currentY = p.second;
            
            if (currentX == adj.size() - 1 && currentY == adj[0].size() - 1) {
    return distance + 1;  // 현재 거리 포함
}

            for (int j = 0; j < 4; ++j) {
                int nx = currentX + dx[j];
                int ny = currentY + dy[j];

                // 유효한 범위 안에 있고, 방문하지 않았으며 길이 있는 경우
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !isVisited[nx][ny] && adj[nx][ny] == 1) {
                    q.push({nx, ny});  // 큐에 추가
                    isVisited[nx][ny] = true;  // 방문 처리
                }
            }
        }
        distance++;  // 한 레벨(거리) 증가
    }
    return -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<bool>> isVisited(maps.size(), vector<bool>(maps[0].size(), false));
    answer = bfs(0,0,maps, isVisited,n,m);
    
    
    
    
    return answer;
}