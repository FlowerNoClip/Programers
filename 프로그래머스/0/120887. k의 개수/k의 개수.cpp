#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string str = "";
    for(int q = i ; q <= j ; q++)
    {
        str = to_string(q);
        for(int z = 0; z < str.length(); z++)
        {
            if(str[z] == static_cast<char>(k + '0'))
            {
                answer ++;
            }
        }        
        
    }
    return answer;
}