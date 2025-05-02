#include <string>
#include <iostream>
#include <algorithm>  // ✅ transform 정의
#include <string>     // ✅ string 정의
#include <cctype>     // ✅ tolower 정의

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int yv = 0;
    int pv = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'p')
        {
            pv++;
        }
        if(s[i] == 'y')
        {
            yv++;
        }
    }
    if(yv != pv)
    {
        answer = false;
    }
    return answer;
}