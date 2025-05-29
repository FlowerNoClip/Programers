#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> lastSeen;  // 문자의 마지막 인덱스 기록

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (lastSeen.find(c) == lastSeen.end()) {
            answer.push_back(-1);
        } else {
            answer.push_back(i - lastSeen[c]);
        }
        lastSeen[c] = i;  // 현재 인덱스를 최신으로 갱신
    }

    return answer;
}