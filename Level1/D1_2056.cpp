#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T; // 몇 개 입력받을 건지
    int dayarr[13] =
        {
            0, 31, 28, 31, 30, 31, 30, // 1 ~ 6월
            31, 31, 30, 31, 30, 31     // 7 ~ 12월
        };

    for (int i = 0; i < T; i++)
    {
        string cal;   // 문자열
        cin >> cal;   // 입력 받기
        string year;  // 년 (0부터 4까지)
        string month; // 월 (4부터 6까지)
        string day;   // 일 (6부터 8까지)

        // 년 문자열 넣기
        for (int j = 0; j < 4; j++)
        {
            year += cal[j];
        }
        // 월 문자열 넣기
        for (int k = 4; k < 6; k++)
        {
            month += cal[k];
        }
        // 일 문자열 넣기
        for (int l = 6; l < 8; l++)
        {
            day += cal[l];
        }
        // 월일 문자열 -> 정수형으로 변환
        int m = stoi(month);
        int d = stoi(day);

        if (m >= 1 && m <= 12 && d <= 31 && d <= dayarr[m])
        {
            cout << "#" << i + 1 << " " << year << "/" << month << "/" << day << endl;
        }
        else
        {
            cout << "#" << i + 1 << " " << "-1" << endl;
        }
    }
}