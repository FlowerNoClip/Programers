#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> absol;
    for(int i = 0; i < score.size(); i++)
    {
        absol.push_back((score[i][0] + score[i][1]));
    }

    for(int i = 0 ; i < absol.size(); i++)
    {
        int cnt = 1;
        for(int j = 0; j <absol.size(); j++)
        {
            if(absol[i] < absol[j])
            {
                cnt++;
            }
        }
        answer.push_back(cnt);
    }
    
    return answer;
}