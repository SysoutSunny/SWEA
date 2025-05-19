#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; // 입력 받는 정수
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int tn; // 테스트 케이스 번호
        cin >> tn;
        int idx;            // 인덱스 몇 번째 점수가 반복 되는지
        int arr[101] = {0}; // 1 ~ 100점까지 점수 배열

        for (int j = 0; j < 1000; j++)
        {
            cin >> idx; // 점수를 입력 받고 몇 번째 인덱스의 갯수를 더할 건지
            arr[idx]++; // ex) idx = 48 이면 48번째에 + 1을 함
        }
        int max = 0; // 최댓값
        for (int k = 0; k < 101; k++)
        {
            // 만약 인덱스 안에 있는 값이
            if (arr[k] >= arr[max])
            {
                max = k;
            }
        }

        // 출력
        cout << "#" << tn << " " << max << endl;
    }

    return 0;
}