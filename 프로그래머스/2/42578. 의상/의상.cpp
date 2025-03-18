#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> map;
    int answer = 1;
    
    for(auto& v : clothes)
    {
        map[v[1]] ++;
    }
    
    for(auto& [key, value] : map)
    {
        answer *= (value + 1);  
    }
    return answer -1;
}