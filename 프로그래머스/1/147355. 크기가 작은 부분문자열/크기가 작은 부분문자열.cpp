#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int count = 0;
    int pLen = p.length();
    long long pNum = stoll(p); 

    for (int i = 0; i <= t.length() - pLen; i++) {
        string sub = t.substr(i, pLen);
        long long subNum = stoll(sub);
        if (subNum <= pNum) {
            count++;
        }
    }

    return count;
}