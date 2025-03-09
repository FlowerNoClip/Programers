#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    while(hp)
    {
        if(hp == 0)
        {
            break;
        }
        if(hp - 5 >= 0)
        {
            hp -= 5;
            answer++;
            continue;
        }
        else if(hp -3 >= 0)
        {
            hp -= 3;
            answer++;
            continue;
        }
        else if(hp - 1 >= 0)
        {
            hp -= 1;
            answer++;
            continue;
            
        }
    }
    return answer;
}