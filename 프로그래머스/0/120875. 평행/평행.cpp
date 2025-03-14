#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 기울기를 계산하는 함수
double slope(vector<int> p1, vector<int> p2) {
    return static_cast<double>(p2[1] - p1[1]) / (p2[0] - p1[0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    do {
        // 첫 번째 직선의 기울기
        double slope1 = slope(dots[0], dots[1]);
        // 두 번째 직선의 기울기
        double slope2 = slope(dots[2], dots[3]);
        
        if (slope1 == slope2) {
            answer = 1;
            break;
        }
    } while (next_permutation(dots.begin(), dots.end()));
    return answer;
}
