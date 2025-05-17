#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T; // �� �� �Է¹��� ����
    int dayarr[13] =
        {
            0, 31, 28, 31, 30, 31, 30, // 1 ~ 6��
            31, 31, 30, 31, 30, 31     // 7 ~ 12��
        };

    for (int i = 0; i < T; i++)
    {
        string cal;   // ���ڿ�
        cin >> cal;   // �Է� �ޱ�
        string year;  // �� (0���� 4����)
        string month; // �� (4���� 6����)
        string day;   // �� (6���� 8����)

        // �� ���ڿ� �ֱ�
        for (int j = 0; j < 4; j++)
        {
            year += cal[j];
        }
        // �� ���ڿ� �ֱ�
        for (int k = 4; k < 6; k++)
        {
            month += cal[k];
        }
        // �� ���ڿ� �ֱ�
        for (int l = 6; l < 8; l++)
        {
            day += cal[l];
        }
        // ���� ���ڿ� -> ���������� ��ȯ
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