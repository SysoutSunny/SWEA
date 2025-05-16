#include <iostream>
using namespace std;

// 중간값 찾기
int main()
{
    int T; // 입력은 항상 홀수 & 9이상 199이하
    cin >> T;
    int arr[T];   // 숫자 배열 생성
    int temp = 0; // 임시값

    // 숫자 배열 안에 입력 숫자 넣기
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    // 오름차순 정렬
    for (int j = 0; j < T - 1; j++)
    {
        // 버블 정렬
        for (int k = 0; k < (T - 1) - j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    // 출력
    cout << arr[T / 2];
}