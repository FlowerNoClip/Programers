#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    unordered_map<string, int> myMap;
    myMap["zero"] = 0;
    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;
    myMap["four"] = 4;
    myMap["five"] = 5;
    myMap["six"] = 6;
    myMap["seven"] = 7;
    myMap["eight"] = 8;
    myMap["nine"] = 9;
    
    string temp2 = "";
    for (char ch : numbers) {
        temp2 += ch;
        if (myMap.find(temp2) != myMap.end()) {
            answer = answer * 10 + myMap[temp2];
            temp2 = "";
        }
    }
    return answer;
}