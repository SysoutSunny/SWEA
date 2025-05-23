#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// View 요약하자면 왼쪽 오른쪽 방향에 2칸 이상 떨어져 있으면 조망권 확보되는 것
int main()
{
    for (int tc = 0; tc < 10; tc++)
    {
        int N;
        cin >> N; // 건물 몇 개 입력 받을 건지

        int build[N] = {0};

        // 입력값 넣기
        for (int i = 0; i < N; i++)
        {
            cin >> build[i];
        }

        int cnt = 0;

        for (int j = 2; j < N - 2; j++)
        {
            // 순서대로 바로 왼쪽, 두번째 왼쪽, 바로 오른쪽, 두번째 오른쪽
            int first_left = build[j - 1];
            int second_left = build[j - 2];
            int first_right = build[j + 1];
            int second_right = build[j + 2];

            // ex) 0 0 254 185 76 227 84 175 0 0 이면 처음 L은 0, 처음 R은 185 총 비교하면 185가 나옴
            int maxHeight = max(max(first_left, second_left), max(first_right, second_right));
            // 현재 비교하고 있는 빌딩 (254)가 185보다 작으면
            if (maxHeight < build[j])
            {
                cnt += build[j] - maxHeight;
            }
        }
        // 출력
        cout << "#" << tc + 1 << " " << cnt << endl;
    }
}