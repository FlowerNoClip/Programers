#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> numbers;
    string temp;
    
    for(int i = 0 ; i <= my_string.size(); i++)
    {
        if(isdigit(my_string[i]))
        {
            temp.push_back(my_string[i]);
        }
        else
        {
            if(!temp.empty())
            {
                numbers.push_back(stoi(temp));
                temp.clear();
            }
        }
    }
    
    for(int num : numbers)
    {
        answer += num;
    }

    return answer;
}