#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> hashMap;
    
    for(auto& name : participant)
    {
        hashMap[name] ++;
    }
    
    for(auto& name : completion)
    {
        hashMap[name] --;
    }
    
    for (auto& pair : hashMap) {
    if (pair.second > 0) {
        
        return pair.first; // 완주하지 못한 사람의 이름
    }
    }
    
    
    
    return answer;
}