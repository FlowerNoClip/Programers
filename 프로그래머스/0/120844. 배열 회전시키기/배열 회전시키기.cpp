#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int temp;
    int temp2;
    if(direction == "right")
    {
        temp = numbers.back();
        for(int i = numbers.size()-1 ; i > 0; i--)
        {
             numbers[i] = numbers[i-1];
        }
        numbers[0] = temp;

    }
    else if(direction == "left")
    {
        temp = numbers.front();
        for(int i = 0 ; i < numbers.size()-1; i++)
        {
             numbers[i] = numbers[i+1];
        }
        numbers[numbers.size() -1] = temp;
    }
    return numbers;
}