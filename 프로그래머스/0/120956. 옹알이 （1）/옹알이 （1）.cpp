#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> allowed = {"aya", "ye", "woo", "ma"}; // 허용된 단어

    for (string word : babbling) {
        bool valid = true;
        string prev = ""; // 마지막 제거된 단어 저장

        // 단어를 탐색
        while (!word.empty() && valid) {
            bool found = false;

            // 허용된 단어 중 찾기
            for (string allow : allowed) {
                if (word.find(allow) == 0) { // word가 허용된 단어로 시작할 때
                    if (allow == prev) { // 직전에 같은 단어가 사용되었다면 무효화
                        valid = false;
                        break;
                    }
                    word.erase(0, allow.size()); // 허용된 단어 제거
                    prev = allow; // 마지막 단어 업데이트
                    found = true;
                    break;
                }
            }

            if (!found) {
                valid = false; // 어떤 허용된 단어도 찾지 못했다면 무효화
            }
        }

        // 단어가 비었고 유효하다면 카운트 증가
        if (valid && word.empty()) {
            answer++;
        }
    }

    return answer;
}
