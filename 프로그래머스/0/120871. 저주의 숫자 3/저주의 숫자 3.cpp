#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> dp;
    dp.push_back(1);
    dp.push_back(2);
    string temp;
    for(int i = 4; i <=10001; i++)
    {
        
        if (i % 3 != 0) 
        {
            temp = to_string(i);
            bool isThree = false;
            for(int j = 0 ; j < temp.length(); j++)
            {
                if(temp[j] == '3')
                {
                    isThree = true;
                    continue;
                }
            }
            if(!isThree)
            {
                dp.push_back(i);
            }
               
        } 
        
    }
    
    answer = dp[n-1];
    return answer;
}