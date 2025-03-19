#include <string>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i = 0; i < priorities.size(); i++)
    {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    int cnt = 0;
    
    while(!q.empty())
    {
        int currentIndex = q.front().first;
        int currentPriority = q.front().second;
        q.pop();
        
        if(currentPriority == pq.top())
        {
            cnt ++;
            pq.pop();
            if(currentIndex == location)
            {
                return cnt;
            }
        }
        else
        {
            q.push({currentIndex, currentPriority});
        }
    }
    return answer;
}