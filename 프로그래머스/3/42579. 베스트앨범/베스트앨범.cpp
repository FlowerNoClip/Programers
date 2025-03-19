#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    unordered_map<string, int> music; // 장르별 총 재생 횟수
    unordered_map<string, vector<pair<int, int>>> musiclist; // 장르별 (재생 횟수, 인덱스) 목록

    // 1️⃣ 장르별 총 재생 횟수 & 곡 목록 저장
    for (int i = 0; i < genres.size(); i++) {
        music[genres[i]] += plays[i]; // 장르별 총 재생 횟수 누적
        musiclist[genres[i]].push_back({plays[i], i}); // (재생 수, 인덱스) 저장
    }

    // 2️⃣ 장르별 총 재생 횟수를 기준으로 정렬 (내림차순)
    vector<pair<int, string>> sortedGenres;
    for (auto &m : music) {
        sortedGenres.push_back({m.second, m.first});
    }
    sort(sortedGenres.rbegin(), sortedGenres.rend()); // 재생 횟수 기준 내림차순 정렬

    // 3️⃣ 각 장르에서 가장 많이 재생된 곡 2개 선택
    for (auto &g : sortedGenres) {
        string genre = g.second;

        // 현재 장르의 곡들을 정렬
        auto &songs = musiclist[genre];
        sort(songs.begin(), songs.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first) return a.second < b.second; // 🎯 재생 횟수 같으면 인덱스 오름차순
            return a.first > b.first; // 🎯 기본적으로 재생 횟수 내림차순
        });

        // 최대 2곡 선택
        for (int i = 0; i < min(2, (int)songs.size()); i++) {
            answer.push_back(songs[i].second); // 곡의 인덱스 추가
        }
    }

    return answer;
}
