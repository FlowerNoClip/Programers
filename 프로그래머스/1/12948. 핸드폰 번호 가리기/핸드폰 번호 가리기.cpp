#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();
    //11  - 4 = 7
    for(int i = 0; i < length; i++)
    {
        if(i < length -4)
        {
            answer+= '*';
        }
        else
        {
            answer += phone_number[i];
        }
    }
    return answer;
}