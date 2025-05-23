#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// View ������ڸ� ���� ������ ���⿡ 2ĭ �̻� ������ ������ ������ Ȯ���Ǵ� ��
int main()
{
    for (int tc = 0; tc < 10; tc++)
    {
        int N;
        cin >> N; // �ǹ� �� �� �Է� ���� ����

        int build[N] = {0};

        // �Է°� �ֱ�
        for (int i = 0; i < N; i++)
        {
            cin >> build[i];
        }

        int cnt = 0;

        for (int j = 2; j < N - 2; j++)
        {
            // ������� �ٷ� ����, �ι�° ����, �ٷ� ������, �ι�° ������
            int first_left = build[j - 1];
            int second_left = build[j - 2];
            int first_right = build[j + 1];
            int second_right = build[j + 2];

            // ex) 0 0 254 185 76 227 84 175 0 0 �̸� ó�� L�� 0, ó�� R�� 185 �� ���ϸ� 185�� ����
            int maxHeight = max(max(first_left, second_left), max(first_right, second_right));
            // ���� ���ϰ� �ִ� ���� (254)�� 185���� ������
            if (maxHeight < build[j])
            {
                cnt += build[j] - maxHeight;
            }
        }
        // ���
        cout << "#" << tc + 1 << " " << cnt << endl;
    }
}