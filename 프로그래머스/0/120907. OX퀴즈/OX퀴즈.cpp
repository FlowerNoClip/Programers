#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0 ; i < quiz.size(); i++)
    {
        string temp = "";
        stringstream ss(quiz[i]);
        vector<string> s;
        while(ss >> temp)
        {
           s.push_back(temp);
        }
        
        if(s[1] == "+")
        {
            if(stoi(s[0]) + stoi(s[2]) == stoi(s[4]))
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        
        if(s[1] == "-")
        {
            if(stoi(s[0]) - stoi(s[2]) == stoi(s[4]))
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
    }
    
    
    return answer;
}