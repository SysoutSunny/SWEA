#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// �ִ�� ���ϱ�
int main(int argc, char **argv)
{
    int T; // �� �� �Է� ���� ����
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int max = 0; // �ִ��� ��Ÿ��

        // ���� 10�� Ž��
        for (int j = 0; j < 10; j++)
        {
            int num;    // ���� �Է�
            cin >> num; // �Է� �޴� 10�� ����

            // ���� num�� ���� max������ ũ�ٸ�
            if (num > max)
            {
                max = num;
            }
        }
        // ���
        cout << "#" << i + 1 << " " << max << endl;
    }
}