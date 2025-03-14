#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    vector<int> v = sides;
    for(int i = 1 ; i < 5001; i++)
    {
        v.push_back(i);
        sort(v.begin(), v.end());
        if(v[0] + v[1] > v[2])
        {
            answer++;
        }
        v = sides;
    }
    return answer;
}