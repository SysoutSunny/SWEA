#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// 자릿수 더하기
int main()
{
    int T; // 자연수 입력받기
    cin >> T;
    int sum = 0; // 총합

    // T가 0보다 클 때까지
    while (T > 0)
    {
        // 6789면 처음 9이 나오고 그다음 8...
        sum += T % 10; // 자릿수 합계는 10으로 나눈 것의 나머지
        T /= 10;
    }
    // 출력
    cout << sum;

    return 0;
}