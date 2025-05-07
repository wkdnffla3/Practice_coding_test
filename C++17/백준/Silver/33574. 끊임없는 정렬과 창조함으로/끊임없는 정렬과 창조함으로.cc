#include <iostream>
#include <algorithm>
using namespace std;

int Q, N;
int A[3000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> Q;
    while (Q--) {
        int q; cin >> q;
        if (q == 1) {
            cin >> q;
            if (q == 1) sort(A, A + N);
            else sort(A, A + N, greater<>());
        }
        else {
            int x, t; cin >> x >> t;
            for (int i = N - 1; i >= x; i--) A[i + 1] = A[i];
            A[x] = t;
            N++;
        }
    }
    cout << N << '\n';
    for (int i = 0; i < N; i++) cout << A[i] << ' ';
}