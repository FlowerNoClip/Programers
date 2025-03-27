#include <string>
#include <vector>

using namespace std;
void dfs(vector<int>& numbers, int index, int sum, int target, int& answer)
{
    if(index == numbers.size()-1)
    {
        if(target == sum + numbers[index]) answer++;
        if(target == sum - numbers[index]) answer++;
        return;
    }

        dfs(numbers, index+1, sum + numbers[index], target, answer);
        dfs(numbers, index+1, sum - numbers[index], target, answer);
    
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    
    dfs(numbers, 0, 0, target, answer);
    return answer;
}