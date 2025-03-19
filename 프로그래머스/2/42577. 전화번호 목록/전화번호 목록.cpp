#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> set;
    
    for(auto& v:phone_book)
    {
        set.insert(v);
    }
    
    for(auto& v : set)
    {
        string perfix = "";
        for(int i = 0; i < v.size(); i++)
        {
            perfix += v[i];
            if(set.find(perfix) != set.end() && perfix != v)
            {
                return false;
            }
        }
    }
    return true;
}