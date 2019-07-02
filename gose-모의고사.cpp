#include <vector>
using namespace std;

int score[3];
int val1[] = {1,2,3,4,5};
int val2[] = {2,1,2,3,2,4,2,5};
int val3[] = {3,3,1,1,2,3,4,4,5,5};

vector<int> solution(vector<int> a) {
    vector<int> ret;
    for (int i = 0 ; i < a.size(); i++){
        if (a[i] == val1[i% 5])score[0]++;
        if (a[i] == val2[i% 8])score[1]++;
        if (a[i] == val3[i%10])score[2]++;
    }
    int mx = 0;
    for (int i = 1 ; i < 3 ; i++){
        if (score[mx] < score[i])
            mx = i;
    }
    for (int i = 0 ; i < 3 ; i++){
        if (score[mx] == score[i])
            ret.push_back(i+1); 
    }
    return ret;
}