#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0); // answer 벡터를 0으로 초기화
    vector<pair<int, int>> wasd = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int max_x = board[0] / 2;
    int max_y = board[1] / 2;
    int min_x = -max_x;
    int min_y = -max_y;

    for (int i = 0; i < keyinput.size(); i++) {
        if (keyinput[i] == "left") {
            if (answer[0] > min_x) answer[0] += wasd[2].first;
        } else if (keyinput[i] == "right") {
            if (answer[0] < max_x) answer[0] += wasd[3].first;
        } else if (keyinput[i] == "up") {
            if (answer[1] < max_y) answer[1] += wasd[0].second;
        } else if (keyinput[i] == "down") {
            if (answer[1] > min_y) answer[1] += wasd[1].second;
        }
    }

    return answer;
}
