#include <string>
#include <vector>

using namespace std;
int arr[20][26] = { 0, };//�� : ���� ���� �� : ���ĺ�
string solution(vector<string> participant, vector<string> completion) {
	//�����ڵ��� �̸��� �ִ´�.
	for (int i = 0; i < participant.size(); i++) {
		for (int j = 0; participant[i][j]; j++) {
			arr[j][participant[i][j] - 'a']++;
		}
	}
	//�����ڵ��� �̸��� ����.
	for (int i = 0; i < completion.size(); i++) {
		for (int j = 0; completion[i][j]; j++) {
			arr[j][completion[i][j] - 'a']--;
		}
	}
	string answer = "";
	return answer;
}