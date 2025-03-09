#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string numstr = to_string(num);
    for(int i = numstr.length(); i >=0; i--)
    {
        if(numstr[i] == static_cast<char>(k + '0'))
        {
            answer = i+1;
        }
    }
    return answer;
}