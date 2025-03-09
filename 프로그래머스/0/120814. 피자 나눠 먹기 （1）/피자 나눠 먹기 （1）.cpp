#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(true)
    {
        answer++;

        n -= 7;
        if(n <= 0 )
        {
            break;
        }

    }
    return answer;
}