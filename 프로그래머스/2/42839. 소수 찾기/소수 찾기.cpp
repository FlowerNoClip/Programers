#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}
int solution(string numbers) {
    int answer = 0;
    vector<char> v;
    vector<int> nums;
    for(char c : numbers)
    {
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    do{
        string temp = "";
        for (int i = 0; i < v.size(); i++) 
        {
            temp.push_back(v[i]);
            nums.push_back(stoi(temp));
        }
    }while(next_permutation(v.begin(), v.end()));
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(isPrime(nums[i]))
        {
            answer++;
        }
    }
    
    return answer;
}