#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = n ; i > 0; i--)
    {
        if(i % 2 == 1)
        {
            answer.push_back(i);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}