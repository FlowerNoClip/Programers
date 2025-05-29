#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    
      int idx = 0;  // 단어 내 인덱스

    for (char c : s) {
        if (c == ' ') {
            answer += ' ';
            idx = 0;  // 단어가 끝났으니 인덱스 리셋
        } else {
            if (idx % 2 == 0) {
                answer += toupper(c);
            } else {
                answer += tolower(c);
            }
            idx++;
        }
    }
    return answer;
}