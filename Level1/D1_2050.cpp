#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; // 입력 받는 문자열
    cin >> s; // 입력 받을 알파벳 배열

    for (int i = 0; i < s.length(); i++)
    {
        // 출력
        // at는 문자열 인덱스 값 char로 추출
        cout << s.at(i) - 64 << " ";
    }
}