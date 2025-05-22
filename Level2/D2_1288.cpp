#include <iostream>
using namespace std;

// 새로운 불면증 치료법
// 문제를 이해를 하는게 핵심이다
// N이 주어졌을 때 N에 2N, 3N,... KN 해서 0부터 9까지 숫자를 모두 볼 수 있는 K값을 구하는 문제이다.
// 어떻게 할지는 생각이 되었는데 구현이 어려워서 구현은 봄
int main()
{
    int T;
    cin >> T; // N번 입력 받는 정수

    for (int i = 0; i < T; i++)
    {
        int N; // 입력 받을 N
        cin >> N;

        bool check[10] = {false}; // 0 ~ 9까지의 양을 모두 체크하는걸 찾는 배열
        int cnt = 10;             // 이 숫자가 0이 되면 0 ~ 9까지 모두 탐색한 것
        int k = 0;                // 이 숫자가 KN의 K임

        while (cnt > 0)
        {
            k++;
            int x = k * N; // 자릿수 전에 숫자 곱하고
            // 숫자가 0일수도 있으니까
            if (x == 0)
            {
                if (!check[0])
                {
                    check[0] = true;
                    cnt--;
                }
            }
            else
            {
                // 0보다 클 때까지 (나중에 나누다보면 0이 되니까)
                while (x > 0)
                {
                    // 자릿수 나누기
                    int d = x % 10;
                    // 그 자릿수가 false면
                    if (!check[d])
                    {
                        // true로 바꾸고 cnt --
                        check[d] = true;
                        cnt--;
                    }
                    // ex) 1235면 5 인덱스 채워지고 10 나눠서 123이 됨 이 작업이 반복
                    x /= 10;
                }
            }
        }
        // 출력
        cout << "#" << i + 1 << " " << k * N << endl;
    }
}