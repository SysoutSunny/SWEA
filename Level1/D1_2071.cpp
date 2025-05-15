#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int T;
    cin >> T;        // 몇 번 입력 받을 건지
    int sum[4] = {}; // 총 합을 나타내는 배열
    int arv[4] = {}; // 총 평균을 나타내는 배열

    for (int i = 0; i < T; i++)
    {
        int temp = 0; // 초기화
        for (int j = 0; j < 10; j++)
        {
            int num;
            cin >> num;  // 10개 숫자를 받음
            temp += num; // 임시 총합
        }
        sum[i] += temp;                 // 총합을 인덱스에 넣어줌
        arv[i] += round(sum[i] / 10.0); // 평균을 소수점 첫 번째 자리 반올림 정수 출력 (round)
    }
    // 출력문
    for (int k = 0; k < 3; k++)
    {
        cout << "#" << k + 1 << " " << arv[k] << endl;
    }
}