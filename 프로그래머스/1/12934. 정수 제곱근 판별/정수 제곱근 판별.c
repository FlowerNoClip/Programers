#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    for(long long i = 0; i <= n; i++)
    {
        if(i * i == n)
        {
            answer = (i+1) * (i+1);
            break;
        }
    }
    
    if(answer <= 0)
    {
        answer = -1;
    }

    return answer;
}