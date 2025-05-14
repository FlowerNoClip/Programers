#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    while(true)
    {
        if(num == 1) break;
        if(answer == 500)
        {
            answer = -1;
            break;
        }
        if(num % 2 == 1)
        {
            num *= 3;
            num += 1;
        }
        else
        {
            num /= 2;
        }
        
        answer++;
    }
    return answer;
}