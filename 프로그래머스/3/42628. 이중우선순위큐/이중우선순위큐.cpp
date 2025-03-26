#include <string>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2, 0); // 결과를 저장할 벡터 초기화
    priority_queue<int> spq; // 정수형 최대 힙으로 변경

    for (auto& op : operations) {
        stringstream ss(op);
        string command;
        int num;
        ss >> command;

        if (command == "I") {
            ss >> num;
            spq.push(num); // 숫자를 최대 힙에 삽입
        } else if (command == "D") {
            if (spq.empty()) continue; // 큐가 비어 있으면 처리 건너뜀

            ss >> num;
            if (num == 1) {
                spq.pop(); // 최대값 삭제
            } else if (num == -1) {
                // 최소값 삭제를 위해 큐를 벡터로 변환
                vector<int> elements;
                while (!spq.empty()) {
                    elements.push_back(spq.top());
                    spq.pop();
                }

                // 최소값 제거
                auto minElement = min_element(elements.begin(), elements.end());
                elements.erase(minElement);

                // 벡터를 다시 최대 힙으로 변환
                for (int val : elements) {
                    spq.push(val);
                }
            }
        }
    }

    // 결과 값 계산
    if (!spq.empty()) {
        answer[0] = spq.top(); // 최대값
        vector<int> elements;
        while (!spq.empty()) {
            elements.push_back(spq.top());
            spq.pop();
        }
        answer[1] = *min_element(elements.begin(), elements.end()); // 최소값
    }

    return answer;
}