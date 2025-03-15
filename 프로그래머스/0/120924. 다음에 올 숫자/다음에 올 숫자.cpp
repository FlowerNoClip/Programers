#include <vector>
using namespace std;

int solution(vector<int> common) {
    // 등차수열인지 확인
    if (common[1] - common[0] == common[2] - common[1]) {
        int diff = common[1] - common[0]; // 공차
        return common.back() + diff;     // 마지막 항에 공차를 더함
    } 
    // 등비수열인 경우
    else {
        int ratio = common[1] / common[0]; // 공비
        return common.back() * ratio;     // 마지막 항에 공비를 곱함
    }
}
