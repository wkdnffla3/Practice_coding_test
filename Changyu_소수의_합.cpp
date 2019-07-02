#include <vector>
#define max_size_arr 10000000
using namespace std;
int arr[max_size_arr + 5] = { 0,1,0 };
long long solution(int N) {
	long long answer = 0;

	for (int p = 2; p <= max_size_arr; p++) {
		if (arr[p] == 0) {
			for (int i = 2; p*i <= max_size_arr; i++) {
				arr[p*i] = 1;
			}
		}
	}
	for (int i = 0; i <= N; i++) {
		if (arr[i] == 0)answer += i;
	}

	return answer;
}