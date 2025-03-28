#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool isDiffrent(string& a, string& b)
{
    int cnt = 0;
    for(int i = 0; i < a.length(); i ++)
    {
        if(a[i] != b[i])
        {
            cnt++;
        }
    }
    if(cnt == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    if (find(words.begin(), words.end(), target) == words.end()) 
    {
        return 0;
    }
    vector<bool> visited(words.size(), false);
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    while(!q.empty())
    {
        string current = q.front().first;
        int step = q.front().second;
        q.pop();
        
        if(current == target)
        {
            return step;
        }
        for(int i = 0; i < words.size(); i++)
        {
            if(!visited[i] && isDiffrent(current, words[i]))
            {
                visited[i] = true;
                q.push({words[i], step+1});
            }
        }
    }
    return 0;
}