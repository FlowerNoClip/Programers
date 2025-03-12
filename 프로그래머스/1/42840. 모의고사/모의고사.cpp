#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int one_answer = 0;
    int two_answer = 0;
    int three_answer = 0;
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == one[i%5]) one_answer++;
        if(answers[i] == two[i%8]) two_answer++;
        if(answers[i] == three[i%10]) three_answer++;
    }
    
    int maxanswer = max({one_answer, two_answer, three_answer});
    if(maxanswer == one_answer) answer.push_back(1);
    if(maxanswer == two_answer) answer.push_back(2);
    if(maxanswer == three_answer) answer.push_back(3);
    
    return answer;
}