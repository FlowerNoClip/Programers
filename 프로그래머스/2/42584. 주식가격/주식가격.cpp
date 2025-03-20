#include <string>
#include <vector>

using namespace std;

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for (int i = 0; i < prices.size(); i++) {
        bool dropped = false; // 가격이 떨어졌는지 확인하는 플래그

        for (int j = i + 1; j < prices.size(); j++) {
            if (prices[i] > prices[j]) {
                answer.push_back(j - i); // 떨어진 시점 기록
                dropped = true;
                break; // 더 이상 비교하지 않음
            }
        }

        if (!dropped) {
            answer.push_back(prices.size() - 1 - i); // 끝까지 가격이 떨어지지 않음
        }
    }

    return answer;
}