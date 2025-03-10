#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> arrtemp;
    for(int i = 0; i < commands.size(); i++)
    {
        for(int j = commands[i][0]; j <= commands[i][1]; j++)
        {
            arrtemp.push_back(array[j-1]);
        }
            sort(arrtemp.begin(), arrtemp.end());
            answer.push_back(arrtemp[commands[i][2]-1]);
            arrtemp.clear();
    }
    return answer;
}