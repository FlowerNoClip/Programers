#include <string>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> daysQueue;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int days = ceil((100 - progresses[i]) / (double)speeds[i]);
        daysQueue.push(days);
    }
    
    while(!daysQueue.empty())
    {
        int current = daysQueue.front();
        daysQueue.pop();
        int count = 1;
        
        while(!daysQueue.empty() && daysQueue.front() <= current)
        {
            count++;
            daysQueue.pop();
        }
        
        answer.push_back(count);
    }
    return answer;
}