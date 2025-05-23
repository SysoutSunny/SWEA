#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T; // 몇 번 실행할 건지

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;    // 1 부터 N까지 더할 값을 입력 할 값
        int sum = 0; // 총 합계

        // N까지 더할려는 반복문
        for (int j = 1; j <= N; j++)
        {
            int J = j; // 반복문은 실행되게 하고 이 변수로 숫자를 더하게
            // 홀수일 땐
            if (j % 2 == 1)
            {
                // 홀수는 양수로
                J = J;
                sum += J;
            }

            // 짝수일 땐
            else if (j % 2 == 0)
            {
                // 짝수는 음수로
                J = -J;
                sum += J;
            }
        }
        // 출력
        cout << "#" << i + 1 << " " << sum << endl;
    }
}