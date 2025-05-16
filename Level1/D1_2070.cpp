#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int T; // 몇 개 입력받을 건지
    cin >> T;
    int a, b; // 숫자 2개를 입력을 받아서 큰지 작은지 비교 예정

    for (int i = 0; i < T; i++)
    {
        // 숫자 2개 입력받기
        cin >> a >> b;
        // 만약 a가 b보다 크다면
        if (a > b)
        {
            cout << "#" << i + 1 << " " << ">" << endl;
        }
        // 같다면
        else if (a == b)
        {
            cout << "#" << i + 1 << " " << "=" << endl;
        }
        // 아닌 경우 전부
        else
        {
            cout << "#" << i + 1 << " " << "<" << endl;
        }

        return 0;
    }
}