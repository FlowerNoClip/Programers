#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string ternary = "";

    // 1. 10진수를 3진수 문자열로 변환
    while (n > 0) {
        ternary += to_string(n % 3);
        n /= 3;
    }

    // 지금 상태가 이미 뒤집힌 3진수니까 바로 처리 가능
    int base = 1;

    // 2. 3진수 문자열을 10진수로 변환
    for (int i = ternary.length() - 1; i >= 0; i--) {
        answer += (ternary[i] - '0') * base;
        base *= 3;
    }
    
    
    return answer;
}

