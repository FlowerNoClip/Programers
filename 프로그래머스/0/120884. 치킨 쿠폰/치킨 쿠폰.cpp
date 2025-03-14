#include <string>
#include <vector>

using namespace std;
 
int solution(int chicken) {
    int answer = 0;
    while(chicken >= 10)
    {
        int coupone = chicken / 10;
        answer += coupone;
        chicken = (chicken % 10) + coupone;
    }
    return answer;
}