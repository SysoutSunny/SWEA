#include <iostream>
using namespace std;

// 어디에 단어가 들어갈 수 있을까
// N x N 행렬에 K 크기에 딱 맞는 배열이 몇 개 들어 갈 수 있는지 체크 하는 문제
// 흰색은 1, 검정은 0
int main()
{
    int T;
    cin >> T;
    int map[15][15];

    for (int tc = 0; tc < T; tc++)
    {
        int N, K;
        cin >> N >> K; // N x N 맵과 K값 입력받기
        int answer = 0;
        // 맵 입력 받기
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> map[i][j];
            }
        }

        // 가로만 확인
        for (int i = 0; i < N; i++)
        {
            int cnt = 0; // 매 행마다 초기화
            for (int j = 0; j < N; j++)
            {
                // 비어있을 경우 (뒤에 있는 행만 비교 (j))
                if (map[i][j] == 1)
                {
                    cnt++; // 몇 개 인지 값 측정
                }
                // 막혀있는 경우
                else
                {
                    // 이 때 K값과 cnt 값을 비교시켜서 충족이 되면 K값이 들어 갈 수 있으니 answer 증가
                    if (cnt == K)
                    {
                        answer++;
                    }
                    cnt = 0; // 초기화
                }
            }
            // 가로 행이 만약 0 0 1 1 1 이런 식으로 막혀있지 않고 뚫려 있을 때도 체크를 해야 하기 때문에
            if (cnt == K)
            {
                answer++;
            }
        }

        // 세로만 확인
        for (int i = 0; i < N; i++)
        {
            int cnt = 0; // 매 행마다 초기화
            for (int j = 0; j < N; j++)
            {
                // 비어있을 경우 (앞에 있는 열만 비교 = j)
                if (map[j][i] == 1)
                {
                    cnt++; // 몇 개 인지 값 측정
                }
                // 막혀있는 경우
                else
                {
                    // 이 때 K값과 cnt 값을 비교시켜서 충족이 되면 K값이 들어 갈 수 있으니 answer 증가
                    if (cnt == K)
                    {
                        answer++;
                    }
                    cnt = 0; // 초기화
                }
            }
            // 세로 행이 만약 0 0 1 1 1 이런 식으로 막혀있지 않고 뚫려 있을 때도 체크를 해야 하기 때문에
            if (cnt == K)
            {
                answer++;
            }
        }
        // 출력
        cout << "#" << tc + 1 << " " << answer << endl;
    }
}