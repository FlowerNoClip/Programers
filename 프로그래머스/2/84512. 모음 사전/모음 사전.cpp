#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
int cnt = 0;  // 전역 변수를 사용하여 cnt 값을 유지

void generate_combinations(string current_combination, const string& word, int& result) {
    if (current_combination == word) {
        result = cnt;
        return;
    }

    if (current_combination.size() > 5) {
        return;
    }

    cnt++;  // 모든 조합을 시도할 때마다 증가

    for (char vowel : vowels) {
        generate_combinations(current_combination + vowel, word, result);
    }
}

int solution(string word) {
    int result = 0;
    cnt = 0;  // cnt를 초기화
    generate_combinations("", word, result);
    return result;  // count는 0부터 시작하므로 결과에 1을 더함
}