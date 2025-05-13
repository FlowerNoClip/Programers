#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int temp = 0;
    if (numbers.size() != 10) {
        while (numbers.size() < 10) {
            numbers.push_back(10);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i <= numbers.size(); i++)
    {
        
        if(numbers[i-temp] != i)
        {
            answer += i;
            temp ++;
        }
    }
    return answer;
}