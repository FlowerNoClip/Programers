#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string s) {
    string answer;
    unordered_map<char, int> freq;
    for(char c : s)
    {
        freq[c] ++;
    }
    for(char c : s)
    {
        if(freq[c] == 1)
        {
            answer+=c;
        }
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}