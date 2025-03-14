#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    for(int i = 0 ; i < db.size(); i++)
    {
        if(db[i][0] == id_pw[0]) { // 아이디 비교
            if(db[i][1] == id_pw[1]) { // 비밀번호 비교
                answer = "login";
                break;
            } else {
                answer = "wrong pw"; // 아이디가 일치하지만 비밀번호가 틀린 경우
            }
        }
    }
    return answer;
}