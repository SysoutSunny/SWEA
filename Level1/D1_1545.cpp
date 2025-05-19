#include <iostream>
using namespace std;

// 리버스
// N을 입력받고 거꾸로 출력
int main()
{
    int T;
    cin >> T; // N부터 거꾸로 출력할 정수

    // 입력 받은 T를 거꾸로 출력하기 위해 - i를 해줌
    for (int i = 0; i <= T; i++)
    {
        // 출력
        cout << T - i << " ";
    }
    return 0;
}
