#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> map;
    
    for(auto& v : participant)
    {
        map[v]++;
    }
    
    for(auto& v : completion)
    {
        map[v]--;
    }
    for(auto& v : map)
    {
        if(v.second > 0)
        {
            return v.first;
        }
    }
}