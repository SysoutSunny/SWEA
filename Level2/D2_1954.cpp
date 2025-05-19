#include <iostream>
#include <vector>
using namespace std;

// 달팽이 숫자
// N x N 행렬을 방향에 맞춰서 + 1 해서 출력하는 문제
int main()
{
    int T;
    cin >> T;
    int arr[10][10] = {0}; // 출력 할 배열생성
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N; // N x N의 행렬 N값 입력 받기

        int top = 0;        // 가장 윗 행 인덱스
        int bottom = N - 1; // 가장 아래 행 인덱스
        int left = 0;       // 가장 왼쪽 열 인덱스
        int right = N - 1;  // 가장 오른쪽 열 인덱스

        int num = 1; // 1부터 채워 넣을꺼니까

        cout << "#" << i + 1 << endl;

        // 윗 행에서 아래행으로 방향 && 왼쪽에서 오른쪽으로 방향
        while (top <= bottom && left <= right)
        {
            // 오른쪽 -> 부터 채우기 시작
            for (int j = left; j <= right; j++)
            {
                // arr[0][0], arr[0][1] 값을 + 1만큼 증진
                arr[top][j] = num++;
            }
            // 이걸 하는 이유는 맨 위에 행이 끝나면 다음 행을 채우기 위해서 (arr[0][1] -> arr[1][0])
            top++;
            // 위에서 아래로 채우기
            for (int k = top; k <= bottom; k++)
            {
                // arr[0][2], arr[1][2]
                arr[k][right] = num++;
            }
            // 다음 열을 채우기 위해
            right--;
            // top보다 bottom이 크다면 (하는 이유는 top++을 하고 top이 값 변경이 되니까)
            if (top <= bottom)
            {
                // 왼쪽 <- 방향 채우기 시작
                for (int l = right; l >= left; l--)
                {
                    // arr[2][2], arr[2][1]
                    arr[bottom][l] = num++;
                }
                bottom--;
            }
            // left보다 right가 크다면
            if (left <= right)
            {
                // 위쪽 방향 채우기
                for (int h = bottom; h >= top; h--)
                {
                    // arr[2][0], arr[2][1]
                    arr[h][left] = num++;
                }
                left++;
            }
        }
        // 출력
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}