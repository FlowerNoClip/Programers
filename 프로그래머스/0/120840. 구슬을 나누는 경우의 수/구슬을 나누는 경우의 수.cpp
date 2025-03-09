#include <string>
#include <vector>

using namespace std;

long long combination(int n, int k)
{
    long long result = 1;
    for(int i = 1; i <=k; i++)
    {
        result *= n - (i - 1);
        result /= i;
    }
    return result;
}

int solution(int balls, int share) {
    return combination(balls, share);
}