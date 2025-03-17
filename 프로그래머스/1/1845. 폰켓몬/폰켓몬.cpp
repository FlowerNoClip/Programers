#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> set;
    for(auto& num : nums)
    {
        set.insert(num);
    }
    
    
    return min(nums.size() / 2 , set.size());
}