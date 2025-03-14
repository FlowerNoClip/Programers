#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int size = board.size();
    int answer = 0;
    vector<vector<int>> xy{{1,1},{1,0},{1,-1},{0,-1},{0,0},{0,1},{-1,1},{-1,0},{-1,-1}};
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <size; j++)
        {
            int check = 1;
            for(const auto& n : xy)
            {
                int nx = i + n[0];
                int ny = j + n[1];
                
                if(nx >= 0 && nx<size && ny >= 0 && ny< size&& board[nx][ny] == 1)
                {
                    check = 0;
                    break;
                }
            }
            answer += check;
        }
    }
    return answer;
}