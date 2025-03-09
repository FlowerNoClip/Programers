#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int mok = n / 10;
    int ntemp = n * 12000;
    int ktemp = (k-mok) * 2000;
    int answer = ntemp + ktemp;
    return answer;
}