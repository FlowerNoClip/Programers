#include <string>
#include <vector>

using namespace std;
int answer = 0;
void dfs(const vector<int>& number, int idx, int cnt, int sum)
{
    if(cnt == 3)
    {
        if(sum == 0) answer++;
        return;
    }
    
    for(int i = idx; i < number.size(); i++)
    {
        dfs(number, i+1, cnt + 1, sum + number[i]);
    }
}
int solution(vector<int> number) {
    answer = 0;
    dfs(number, 0,0,0);
    
    return answer;
}