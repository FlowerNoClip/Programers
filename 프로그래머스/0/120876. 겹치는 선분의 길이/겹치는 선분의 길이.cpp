#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<pair<int, int>> points;

    // 각 선분의 시작점과 끝점을 points 벡터에 추가합니다.
    for (auto line : lines) {
        points.push_back({line[0], 1}); // 시작점: +1
        points.push_back({line[1], -1}); // 끝점: -1
    }

    // points 벡터를 시작점을 기준으로 정렬합니다.
    sort(points.begin(), points.end());

    int active_lines = 0;
    int last_point = points[0].first;

    // points 벡터를 순회하며 겹치는 구간의 길이를 계산합니다.
    for (auto point : points) {
        if (active_lines > 1) {
            answer += point.first - last_point;
        }
        active_lines += point.second;
        last_point = point.first;
    }

    return answer;
}
