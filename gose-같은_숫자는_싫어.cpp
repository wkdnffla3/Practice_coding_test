#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
	for (int x : arr){
    	if (answer[answer.size()-1] != x) answer.push_back(x);
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

    return answer;
}