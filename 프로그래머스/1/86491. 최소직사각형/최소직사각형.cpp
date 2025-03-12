#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_height = 0;
    int max_width = 0;
    for(auto& size : sizes)
    {
        int width = max(size[0], size[1]);
        int height = min(size[0], size[1]);
        
        max_height = max(height, max_height);
        max_width = max(width, max_width);
    }
    return max_height * max_width;
}