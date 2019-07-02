#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer += s[(s.size() - 1)/2];
    if(s.size() % 2 == 0){
        answer += s[s.size()/2];
    }
    return answer;
}