#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isAnswer = false;
void dfs(vector<vector<string>>& tickets, vector<string>& answer, vector<bool>& visited, string start, int cnt)
{
    answer.push_back(start);

    if (cnt == tickets.size())
    {
        isAnswer = true;
    }

    for (int i = 0; i < tickets.size(); i++)
    {
        if (visited[i]) continue;
        if (tickets[i][0] == start)
        {
            visited[i] = true;
            dfs(tickets, answer, visited, tickets[i][1], cnt + 1);

            if (!isAnswer)
            {
                answer.pop_back();
                visited[i] = false;
            }
        }

    }
}
vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    vector<string> answer;
    vector<bool> visited(tickets.size(), false);
    dfs(tickets, answer, visited, "ICN", 0);
    return answer;
}