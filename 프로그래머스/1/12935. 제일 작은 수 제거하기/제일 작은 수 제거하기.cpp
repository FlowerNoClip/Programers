#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1)
        return {-1};

    // 최소값 찾기
    int min_value = *min_element(arr.begin(), arr.end());

    // 최소값의 첫 위치 찾고 제거
    arr.erase(find(arr.begin(), arr.end(), min_value));

    return arr;
}