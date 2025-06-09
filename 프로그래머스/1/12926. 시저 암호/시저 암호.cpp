#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (char c : s) {
        if (c == ' ') {
            answer += ' ';
        } else if (c >= 'a' && c <= 'z') {
            answer += (char)('a' + (c - 'a' + n) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            answer += (char)('A' + (c - 'A' + n) % 26);
        } else {
            answer += c;
        }
    }
    return answer;
}