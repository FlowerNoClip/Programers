#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 2147483647;
    for(int i = 0; i < array.size(); i++)
    {
        int diff = abs(n - array[i]);
        if(diff < min)
        {
            min = diff;
            answer = array[i];
        }
        if(diff == min)
        {
            if(array[i] < answer)
            {
                answer = array[i];
            }
        }
    }
    return answer;
}