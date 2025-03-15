#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_width = 0;
    int max_height = 0;
    
    for(auto& size : sizes)
    {
        int width = min(size[0], size[1]);
        int height = max(size[0], size[1]);
        
        max_width = max(width,max_width);
        max_height = max(height, max_height);
    }
    return max_width * max_height;
}