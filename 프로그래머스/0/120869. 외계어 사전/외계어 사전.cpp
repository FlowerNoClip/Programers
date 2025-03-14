#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    vector<bool> bSpell(spell.size(), false);
    
    for (int i = 0; i < dic.size(); i++) {
        fill(bSpell.begin(), bSpell.end(), false); // 초기화 코드 추가
        for (int j = 0; j < dic[i].size(); j++) {
            for (int k = 0; k < spell.size(); k++) {
                if (spell[k] == string(1, dic[i][j]) && !bSpell[k]) { // 변환 및 조건 수정
                    bSpell[k] = true;
                }
            }
        }
        for (int l = 0; l < bSpell.size(); l++) {
            if (!bSpell[l]) {
                break;
            }
            if (l == bSpell.size() - 1) {
                answer = 1;
            }
        }
    }
    return answer;
}
