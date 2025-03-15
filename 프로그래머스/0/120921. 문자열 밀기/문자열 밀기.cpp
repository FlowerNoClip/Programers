#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    if(A==B) return 0;
    for(int i = 1; i < A.length(); ++i)
    {
        char s = A[A.size() - 1];
        A = A.substr(0, A.size() - 1);
        A = s + A;
        if(A == B) return i;  
        
    }
    return -1;
}