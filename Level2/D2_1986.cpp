#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T; // �� �� ������ ����

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;    // 1 ���� N���� ���� ���� �Է� �� ��
        int sum = 0; // �� �հ�

        // N���� ���ҷ��� �ݺ���
        for (int j = 1; j <= N; j++)
        {
            int J = j; // �ݺ����� ����ǰ� �ϰ� �� ������ ���ڸ� ���ϰ�
            // Ȧ���� ��
            if (j % 2 == 1)
            {
                // Ȧ���� �����
                J = J;
                sum += J;
            }

            // ¦���� ��
            else if (j % 2 == 0)
            {
                // ¦���� ������
                J = -J;
                sum += J;
            }
        }
        // ���
        cout << "#" << i + 1 << " " << sum << endl;
    }
}