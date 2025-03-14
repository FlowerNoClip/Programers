#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int solution(int a, int b) {
    int answer = 2;

    int gdcs = gcd(a, b);
    b /= gdcs; 
    
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;

    // 마지막에 남은 값이 1이면 유한소수입니다.
    if (b == 1) {
        answer = 1;
    }

    return answer;
}
