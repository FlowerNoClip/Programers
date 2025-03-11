#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    string word;
    vector<char> operators;
    vector<int> numbers;
    while (ss >> word) {
        if (word == "+" || word == "-") {
            operators.push_back(word[0]);
        } else {
            numbers.push_back(stoi(word));
        }
    
    if (!numbers.empty()) {
        answer = numbers[0];
    }

    for (size_t i = 1; i < numbers.size(); ++i) {
        if (operators[i - 1] == '+') {
            answer += numbers[i];
        } else if (operators[i - 1] == '-') {
            answer -= numbers[i];
        }
    }
        
    
}
    return answer;
}

