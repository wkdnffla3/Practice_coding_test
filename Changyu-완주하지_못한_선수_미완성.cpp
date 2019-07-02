#include <string>
#include <vector>

using namespace std;
int arr[20][26] = { 0, };//열 : 글자 순서 행 : 알파벳
string solution(vector<string> participant, vector<string> completion) {
	//참가자들의 이름을 넣는다.
	for (int i = 0; i < participant.size(); i++) {
		for (int j = 0; participant[i][j]; j++) {
			arr[j][participant[i][j] - 'a']++;
		}
	}
	//도착자들의 이름을 뺀다.
	for (int i = 0; i < completion.size(); i++) {
		for (int j = 0; completion[i][j]; j++) {
			arr[j][completion[i][j] - 'a']--;
		}
	}
	string answer = "";
	return answer;
}