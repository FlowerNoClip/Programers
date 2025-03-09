#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool isNumber(char c) {
    return isdigit(static_cast<unsigned char>(c));
}


vector<int> solution(string my_string) {
    vector<int> answer;
        for(int i = 0 ; i < my_string.size(); i++)
    {
        if(isNumber(my_string[i]))
        {
            answer.push_back(my_string[i] - '0');    
        }
    }
    
    sort(answer.begin(), answer.end());

    return answer;
}