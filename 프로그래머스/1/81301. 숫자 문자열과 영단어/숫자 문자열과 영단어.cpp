#include <string>
#include <map>
using namespace std;

int solution(string s) {
    map<string, char> wordToDigit = {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'},
        {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}
    };

    string temp = "";
    string answerString = "";

    for (char ch : s) {
        if (isdigit(ch)) {
            answerString += ch; // 숫자면 그대로 추가
        } else {
            temp += ch;
            if (wordToDigit.count(temp)) {
                answerString += wordToDigit[temp];
                temp = ""; // 매칭된 단어 초기화
            }
        }
    }

    return stoi(answerString);
}