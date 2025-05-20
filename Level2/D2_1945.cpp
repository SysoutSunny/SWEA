#include <iostream>
using namespace std;

// 간단한 소인수분해
// 그냥 뒤에서부터 조건문 다 체크해서 푸니까 괜찮네
int main()
{
    int T;
    cin >> T; // 몇 개 인지 입력 받는 정수

    for (int i = 0; i < T; i++)
    {
        // 순서대로 2, 3, 5, 7, 11
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int e = 0;
        int num; // 입력 받는 숫자

        cin >> num;

        // 주어진 숫자가 0이 될 때 까지
        while (true)
        {
            if (num % 11 == 0)
            {
                // 11로 나누고 e 더하기
                num /= 11;
                e++;
            }
            if (num % 7 == 0)
            {
                // 7로 나누고 d 더하기
                num /= 7;
                d++;
            }
            if (num % 5 == 0)
            {
                // 5로 나누고 c 더하기
                num /= 5;
                c++;
            }
            if (num % 3 == 0)
            {
                // 3로 나누고 b 더하기
                num /= 3;
                b++;
            }
            if (num % 2 == 0)
            {
                // 2로 나누고 a 더하기
                num /= 2;
                a++;
            }
            if (num == 1)
            {
                break;
            }
        }
        // 출력
        cout << "#" << i + 1 << " " << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
}