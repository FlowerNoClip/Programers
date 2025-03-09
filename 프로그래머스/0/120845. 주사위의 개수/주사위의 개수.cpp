#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int x = 0, y = 0, z = 0;
    
    x = box[0] / n;
    y = box[1] / n;
    z = box[2] / n;
    
    
    return x*y*z;
}