#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> set;
    
    for(auto& v : phone_book)
    {
        set.insert(v);
    }
    
    for(const string& phone : phone_book)
    {
        string perfix = "";
        for(int i = 0; i < phone.size(); i++)
        {
            perfix += phone[i];
            if(set.find(perfix) != set.end() && perfix != phone)
            {
                return false;
            }
        }
    }
    return true;
}