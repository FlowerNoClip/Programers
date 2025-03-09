#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j <= 9; j++)
        {
          if(48+j == static_cast<int>(str[i]))
            {
                answer.push_back((str[i])+49);
            }  
        }
        
    }
    return answer;
}