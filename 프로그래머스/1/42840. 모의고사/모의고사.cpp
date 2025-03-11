#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> result;
    
    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    // 정답 맞힌 개수 계산
    int score_one = 0, score_two = 0, score_three = 0;
    for(int i = 0; i < answers.size(); i++) {
        if(answers[i] == one[i % 5]) score_one++;
        if(answers[i] == two[i % 8]) score_two++;
        if(answers[i] == three[i % 10]) score_three++;
    }
    
    // 최고 점수 계산
    int max_score = max({score_one, score_two, score_three});
    
    // 최고 점수를 받은 학생 찾기
    if(score_one == max_score) result.push_back(1);
    if(score_two == max_score) result.push_back(2);
    if(score_three == max_score) result.push_back(3);
    
    return result;
}