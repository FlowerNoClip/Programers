#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int sumOfDigits(int number)
{
    number = abs(number);
    if (number == 0) return 1; 

        int sum = 0;

        while(number > 0)
        {
            sum += number % 10;
            number /= 10;
        }

        return sum;
}
bool solution(int x) {
    bool answer = false;
    if(x % sumOfDigits(x) == 0)
    {
        answer = true;
    }
    return answer;
}