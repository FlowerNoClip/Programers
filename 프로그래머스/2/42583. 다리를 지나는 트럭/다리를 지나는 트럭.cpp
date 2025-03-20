#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> tq;
    for(auto& v : truck_weights) {
        tq.push(v);
    }

    queue<pair<int, int>> q;
    int currentWeight = 0;
    int currentTrucknum = 0;

    while (!tq.empty() || !q.empty()) {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++) 
        {
            pair<int, int> front = q.front();
            q.pop();

            front.second -= 1;
            if (front.second > 0) 
            {
                q.push(front);
            } 
            else 
            {
                currentWeight -= front.first;
                currentTrucknum--;
            }
        }
        
        if (!tq.empty() && currentWeight + tq.front() <= weight && currentTrucknum + 1 <= bridge_length) {
            q.push({tq.front(), bridge_length});
            currentWeight += tq.front();
            currentTrucknum++;
            tq.pop();
        }

        answer++;
    }

    return answer;
}
