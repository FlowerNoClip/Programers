#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one_answer[5] = {1,2,3,4,5};
    int two_answer[8] = {2,1,2,3,2,4,2,5};
    int three_answer[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int one = 0, two = 0, three = 0;
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == one_answer[i%5]) one ++;
        if(answers[i] == two_answer[i%8]) two ++;
        if(answers[i] == three_answer[i%10]) three++;
    }
    
    int max_ansnum = max({one, two, three});
    
    if(max_ansnum == one) answer.push_back(1);
    if(max_ansnum == two) answer.push_back(2);
    if(max_ansnum == three) answer.push_back(3);
    
    return answer;
}