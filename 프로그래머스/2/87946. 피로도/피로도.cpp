#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    sort(dungeons.begin(), dungeons.end());
    do{
        int k_c = k;
        int cnt = 0;
        for(int i = 0; i < dungeons.size(); i++)
        {
            if(dungeons[i][0] <=  k_c)
            {
                k_c -= dungeons[i][1];
                cnt ++;
            }
            else
            {
                break;
            }

        }
       answer = max(answer, cnt); 
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    


    return answer;
}