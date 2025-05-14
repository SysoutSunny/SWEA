#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int T; // 반복문 몇 번 실행 할 건지
    int test_case;

    cin >> T; // 입력 받기

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int sum = 0; // 총 합계 배열
        for (int i = 0; i < 10; i++)
        {
            int num;    // 10개 숫자를 담음
            cin >> num; // 10개 숫자 입력 받기

            if (num % 2 != 0) // 만약 숫자가 홀수라면
            {
                sum += num; // 합계 더하기
            }
        }

        cout << "#" << test_case << " " << sum << endl; // 출력
    }

    return 0;
}