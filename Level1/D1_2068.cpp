#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// 최대수 구하기
int main(int argc, char **argv)
{
    int T; // 몇 개 입력 받을 건지
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int max = 0; // 최댓값을 나타냄

        // 숫자 10개 탐색
        for (int j = 0; j < 10; j++)
        {
            int num;    // 숫자 입력
            cin >> num; // 입력 받는 10개 숫자

            // 만약 num이 기존 max값보다 크다면
            if (num > max)
            {
                max = num;
            }
        }
        // 출력
        cout << "#" << i + 1 << " " << max << endl;
    }
}