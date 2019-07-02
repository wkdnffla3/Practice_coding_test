#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll go(ll a){
    if (a < 0)
        return a * (a-1) / -2;
    return a * (a+1) / 2;
}

ll solution(int a, int b) {
    ll answer = 0;
    if (a > b) swap(a,b);
    
    if (a < 0 && b < 0)answer = go(a) - go(b) + b;
    else if (a < 0 && 0 <= b)answer = go(a) + go(b);
   	else answer = go(b) - go(a) + a; 
    
    return answer;
}