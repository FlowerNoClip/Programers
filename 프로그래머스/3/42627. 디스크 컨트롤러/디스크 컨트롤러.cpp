#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> jobs) {
    // 요청 시간을 기준으로 정렬
    sort(jobs.begin(), jobs.end(), [](vector<int>& a, vector<int>& b) {
        return a[0] < b[0]; // 요청 시간 기준 정렬
    });

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq; // 최소 힙 선언
    int currentTime = 0; // 현재 시간
    int totalWaitTime = 0; // 총 대기 시간
    int index = 0; // jobs 배열 인덱스

    while (!pq.empty() || index < jobs.size()) {
        // 요청 시간이 현재 시간보다 작거나 같은 작업을 힙에 추가
        while (index < jobs.size() && jobs[index][0] <= currentTime) {
            pq.push({jobs[index][1], jobs[index][0]}); // 작업 시간 기준으로 최소 힙 사용
            index++;
        }

        if (!pq.empty()) {
            // 가장 짧은 작업을 처리
            auto job = pq.top();
            pq.pop();

            currentTime += job[0]; // 작업 수행 시간 추가
            totalWaitTime += currentTime - job[1]; // 대기 시간 계산
        } else {
            // 처리 가능한 작업이 없으면 시간을 증가시킴
            currentTime = jobs[index][0];
        }
    }

    return totalWaitTime / jobs.size(); // 평균 대기 시간 반환
}