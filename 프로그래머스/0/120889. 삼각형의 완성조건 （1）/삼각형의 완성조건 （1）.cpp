#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {    
    int answer = 0;
    sort(sides.begin(), sides.end());
    if(sides[0] + sides[1] <= sides[2])
    {
        answer = 2;
    }
    else
    {
        answer = 1;
    }
    
    return answer;
}