#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    vector<string> num_strs;
    for (int num : numbers) {
        num_strs.push_back(to_string(num));
    }

    sort(num_strs.begin(), num_strs.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });

    string answer;
    for (const string& num_str : num_strs) {
        answer += num_str;
    }
    
    if(answer == string(answer.length(), '0'))
    {
        return "0";
    }
    
    return answer;
}