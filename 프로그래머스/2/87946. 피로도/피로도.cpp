#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    sort(dungeons.begin(), dungeons.end());
    
    do{
        int cnt = 0;
        int k_c = k;
        for(int i = 0; i < dungeons.size(); i++)
        {
            if(k_c >= dungeons[i][0])
            {
                k_c -= dungeons[i][1];
                cnt++;
            }
        }
        
        if(cnt >= answer)
        {
            answer = cnt;
        }
    }while(next_permutation(dungeons.begin(), dungeons.end()));
           
    return answer;
}