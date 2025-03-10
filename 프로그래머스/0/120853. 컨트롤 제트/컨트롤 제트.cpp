#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> numbers;
    stringstream ss(s);
    string word;
    
    while(ss >> word)
    {
        if(word == "Z")
        {
            if(!numbers.empty())
            {
                answer -= numbers.back();
                numbers.pop_back();
            }

        }
        else
        {
            int num = stoi(word);
            answer += num;
            numbers.push_back(num);
        }
    }
    return answer;
}