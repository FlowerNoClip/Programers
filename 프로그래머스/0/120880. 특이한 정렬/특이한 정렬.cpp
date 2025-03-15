#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end(), [n](const int& a, const int& b) {
        if (abs(a - n) == abs(b - n)) {
            // 절댓값 차이가 같을 때, 더 작은 값이 앞에 오도록 정렬
            return a > b;
        }
        return abs(a - n) < abs(b - n); // 절댓값 차이에 따라 정렬
    });
        
    return numlist;
}