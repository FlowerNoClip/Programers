#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> dp = triangle;
    
    for(int i = 1; i < dp.size(); i++)
    {
        for(int j = 0; j < dp[i].size(); j++)
        {
            if (j == 0) {
                dp[i][j] += dp[i-1][j]; // 삼각형의 왼쪽 끝은 위쪽 값만 고려
            } else if (j == dp[i].size() - 1) {
                dp[i][j] += dp[i-1][j-1]; // 삼각형의 오른쪽 끝은 왼쪽 대각선만 고려
            } else {
                dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]); // 일반적인 경우
}

        }
    }
    if (!dp.empty() && !dp.back().empty()) {
        answer = *max_element(dp.back().begin(), dp.back().end());
    } else {
        answer = -1; // 예외 처리 (필요한 경우)
    }

    return answer;
}