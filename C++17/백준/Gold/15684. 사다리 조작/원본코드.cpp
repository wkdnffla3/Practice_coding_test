#include<iostream>

using namespace std;

bool map[100][100] = { false, };
// H 가로 N 세로
int N, M, H;
int min_value = 4;
bool check() {
	/*int ladder[11] = { 0 };
	for (int i = 0; i < 11; i++)ladder[i] = i;
	for (int i = 1; i < H + 1; i++) {
		for (int j = 1; j < N; j++) {
			if (map[i][j] == 1) {
				int temp = ladder[j];
				ladder[j] = ladder[j + 1];
				ladder[j + 1] = temp;
			}
		}
	}

	for (int i = 1; i < N; i++) {
		if (ladder[i] != i) 
			return false;
	}
	return true;*/
	for (int i = 1; i <= N; i++) {
		int pos = i;

		for (int j = 1; j <= H; j++) {
			if (map[j][pos]) pos++;
			else if (map[j][pos - 1]) pos--;
		}

		if (pos != i) return false;
	}
	
	return true;
}

void dfs(int a, int b, int limit, int current) {
	/*if (current == limit) {
		if (check()) { 
			cout << current;
			exit(0);
		}
		return;
	}*/
	//else 
	if (current >= min_value)return;
	
	if (check()) 
	{
		min_value = current;
		cout << min_value;
		exit(0);
		return;
	}
	
	{
		for (int i = a; i < H + 1; i++) {
			for (int j = 1; j < N; j++) {
				if (map[i][j]  || map[i][j - 1]  || map[i][j + 1] ) {
					continue;
				}
				else {
					map[i][j] = true;
					dfs(i, j, limit, current+1);
					map[i][j] = false;
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M >> H;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = true;
	}
	if (check()) {
		cout << 0;
		return 0;
	}
	
	dfs(1, 1, 0, 0);
	if (min_value > 3)
		cout << -1;
	else cout << min_value;
	return 0;
}


