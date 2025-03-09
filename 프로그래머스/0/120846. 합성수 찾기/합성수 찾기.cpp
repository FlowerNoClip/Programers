#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 4; i <= n; i++)
    {
        int divisor = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                divisor++;
            }
        }
        if(divisor >= 3)
        {
            answer++;
        }
    }
    return answer;
}