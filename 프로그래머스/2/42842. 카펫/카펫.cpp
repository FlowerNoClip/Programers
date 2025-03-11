#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int num = brown + yellow;
    for (int i = 3; i <= num / 3; i++) {  // i는 세로 길이
        if (num % i == 0) { // num이 i로 나누어 떨어질 경우
            int j = num / i; // j는 가로 길이
            if ((j - 2) * (i - 2) == yellow) { // 조건 검사
                answer.push_back(j);
                answer.push_back(i);
                return answer;
            }
        }
    }
    return answer;
}