#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one_answers[5] = {1,2,3,4,5};
    int two_answers[8] = {2,1,2,3,2,4,2,5};
    int three_answers[10] = {3,3,1,1,2,2,4,4,5,5};
    int one = 0, two = 0 , three = 0;
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == one_answers[i%5]) one++;
        if(answers[i] == two_answers[i%8]) two++;
        if(answers[i] == three_answers[i%10]) three++;
    }
    
    int max_length = max({one, two, three});
    if(max_length == one) answer.push_back(1);
    if(max_length == two) answer.push_back(2);
    if(max_length == three) answer.push_back(3);
    return answer;
}