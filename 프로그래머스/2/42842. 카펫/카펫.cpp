#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int num = brown + yellow;
    
    for(int i = 3; i <= num/3; i++)
    {
        if(num % i == 0)
        {
            int j = num / i;
            if((i-2) * (j-2) == yellow)
            {
                answer.push_back(j);
                answer.push_back(i);
                return answer;
            }
        }
    }
    return answer;
}