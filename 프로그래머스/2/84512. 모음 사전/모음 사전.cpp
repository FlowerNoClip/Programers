#include <string>
#include <vector>

using namespace std;
vector<char> aeiou = {'A','E','I','O','U'};
int result = 0;
bool found = false;
void combination(string answer, int length, const string& word) {
    if (found) {
        return;
    }
    
    result++;
    if (answer == word) {
        found = true;
        return;
    }
    if (length == 5) {
        return;
    }
    
    for (int i = 0; i < 5; i++) {
        combination(answer + aeiou[i], length + 1, word);
    }
}
int solution(string word) {
    int answer = 0;
    combination("", 0, word);
    
    return result - 1;
}