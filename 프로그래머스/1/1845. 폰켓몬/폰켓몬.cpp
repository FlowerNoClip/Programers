#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> set;
    for(auto& num : nums)
    {
        set.insert(num);
    }
    return min(nums.size() / 2, set.size());
}