#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; // 몇 번 반복 할건지
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M; // N x N 크기 배열, M x M 크기의 파리채
        cin >> N >> M;
        int arrN[15][15] = {0}; // 최대 15 x 15 N 배열

        // 입력 받을 arrN 배열 넣기
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                cin >> arrN[j][k];
            }
        }
        int max = 0; // M x M 크기 최댓값
        // N - M + 1 하면 N x N 크기의 배열 나옴 ex) 5 - 2 + 1 = 4
        for (int I = 0; I < N - M + 1; I++)
        {
            for (int J = 0; J < N - M + 1; J++)
            {
                // 여기서 초기화를 해야 다음 행렬 더할 때 초기화
                int sum = 0;
                // 여기가 이제 순차적으로 M x M 파리채의 합을 구하는 식 ex) 5 x 5면 0이면 (0 ~ 2) x (0 ~ 2) 돌고 (1 ~ 3) x (1 ~ 3) 이런식으로 돌음
                for (int K = I; K < I + M; K++)
                {
                    for (int L = J; L < J + M; L++)
                    {
                        // M x M 배열안에 있는 값 전부 더하기
                        sum += arrN[K][L];
                    }
                }
                // 만약 M x M을 더한 값이 max보다 크다면
                if (max <= sum)
                {
                    // 최대치 변경
                    max = sum;
                }
            }
        }
        // 출력
        cout << "#" << i + 1 << " " << max << endl;
    }
}