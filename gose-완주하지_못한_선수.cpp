#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 1. 두 배열을 사전순으로 정렬합니다.
// 2. 두 배열을 순서대로 탐색하여 다른 이름이 나온다면 그 이름이 정답이 됩니다.
// 3. 찾지 못 했다면 길이가 긴 participant의 마지막 원소가 정답이 됩니다.
// 4. 시간복잡도 : 정렬 후 탐색 -> O(NlogN + N) = O(NlogN)
string solution(vector<string> participant, vector<string> completion) {
    // 1
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    // 2
   	for (size_t i = 0 ; i < completion.size() ; i++) {
        if (participant[i] != completion[i])return participant[i];
    }
    // 3
    return participant[participant.size() - 1];
}