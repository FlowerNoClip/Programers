#include <string>
#include <vector>

using namespace std;
int answer = 0;

void dfs(int start, int& n, vector <vector<int>>& adj, vector<bool>& isVisited) {
    isVisited[start] = true;
    for (int i = 0; i < n; ++i) {
        if (!isVisited[i] && adj[start][i] == 1) {
            dfs(i, n, adj, isVisited);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    
    vector<bool> isVisited(computers.size(), false);
    
    for(int i=0; i<n; i++) 
    { 
        if(!isVisited[i]) 
        { 
        dfs(i, n, computers, isVisited);
        answer++; 
        }
    }
          

    return answer;
}