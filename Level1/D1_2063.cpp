#include <iostream>
using namespace std;

// �߰��� ã��
int main()
{
    int T; // �Է��� �׻� Ȧ�� & 9�̻� 199����
    cin >> T;
    int arr[T];   // ���� �迭 ����
    int temp = 0; // �ӽð�

    // ���� �迭 �ȿ� �Է� ���� �ֱ�
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    // �������� ����
    for (int j = 0; j < T - 1; j++)
    {
        // ���� ����
        for (int k = 0; k < (T - 1) - j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    // ���
    cout << arr[T / 2];
}