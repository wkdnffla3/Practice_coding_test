#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 10000005;
bool prime[MAXN];

void sieve(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 4 ; i < MAXN ; i+= 2)
        prime[i] = 0;
    for (int i = 3 ; i * i <= MAXN ; i+=2){
        if(prime[i]){
            for (int j = i*i ; j <= MAXN ; j+=i){
                prime[j] = 0;
            }
        }
    }
}

// 1. 에라토스테네스의 체
// 2. 연산
long long solution(int N) {
    long long answer = 0;
    // 1
    sieve();
    // 2
    for (int i = 2 ; i <= N ; i++){
        if (prime[i])answer += i;
    }
    return answer;
}