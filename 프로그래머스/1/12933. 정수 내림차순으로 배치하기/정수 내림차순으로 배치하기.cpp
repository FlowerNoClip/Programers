#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<int> arr;
    string s = to_string(n);

    for (int i = 0; i < s.length(); i++) {
        arr.push_back(s[i] - '0'); // 문자 → 숫자 변환
    }

    sort(arr.begin(), arr.end(), greater<int>());

    string temp;
    for (int i = 0; i < arr.size(); i++) {
        temp.push_back(arr[i] + '0'); // 숫자 → 문자 변환
    }

    long long answer = stoll(temp); // int → long long
    return answer;
}
