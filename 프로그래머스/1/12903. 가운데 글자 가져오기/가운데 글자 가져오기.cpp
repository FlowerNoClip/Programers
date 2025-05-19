#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = s.size() / 2;
    if(s.size() % 2 == 1) 
    {
        answer += s[temp];
    }
    else 
    {
        answer += s[temp-1];
        answer += s[temp];
    }
    return answer;
}