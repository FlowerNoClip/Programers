#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(auto& v : scoville)
    {
        minHeap.push(v);
    }
    while(!(minHeap.top() >= K))
    {
        if (minHeap.size() >= 2) 
        {
            int first = minHeap.top();
            minHeap.pop();
            int second = minHeap.top();
            minHeap.pop();

            int result = first + (second * 2);
            minHeap.push(result);
        } 
        else
        {
            answer = -1;
            break;
        }
        answer ++;
    }
    
    
    
    return answer;
}