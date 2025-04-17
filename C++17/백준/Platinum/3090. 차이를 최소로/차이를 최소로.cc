#include<iostream>
#define f(i,l,r) for(int i=l;i<r;++i)
#define fr(i,l,r) for(int i=l-1;i>=r;--i)
using namespace std;
 
const int LEN = 1e5 + 1;
int n, t, a[LEN], b[LEN];
 
bool minimize(int lim) {
    f(i, 0, n)b[i] = a[i];
 
    int cnt = t;
    f(i, 1, n) if (b[i] - b[i - 1] > lim) {
        int tmp = b[i - 1] + lim;
        cnt -= (b[i] - tmp);
        if (cnt < 0)return false;
        b[i] = tmp;
    }
    fr(i, n - 1, 0) if (b[i] - b[i + 1] > lim) {
        int tmp = b[i + 1] + lim;
        cnt -= (b[i] - tmp);
        if (cnt < 0)return false;
        b[i] = tmp;
    }
 
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    cin >> n >> t;
    f(i, 0, n) cin >> a[i];
 
    int l = 0, r = 1e9;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (minimize(mid))r = mid - 1;
        else l = mid + 1;
    }
    minimize(l);
    f(i, 0, n)cout << b[i] << ' ';
}
