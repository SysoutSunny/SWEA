#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; // �Է� �޴� ����
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int tn; // �׽�Ʈ ���̽� ��ȣ
        cin >> tn;
        int idx;            // �ε��� �� ��° ������ �ݺ� �Ǵ���
        int arr[101] = {0}; // 1 ~ 100������ ���� �迭

        for (int j = 0; j < 1000; j++)
        {
            cin >> idx; // ������ �Է� �ް� �� ��° �ε����� ������ ���� ����
            arr[idx]++; // ex) idx = 48 �̸� 48��°�� + 1�� ��
        }
        int max = 0; // �ִ�
        for (int k = 0; k < 101; k++)
        {
            // ���� �ε��� �ȿ� �ִ� ����
            if (arr[k] >= arr[max])
            {
                max = k;
            }
        }

        // ���
        cout << "#" << tn << " " << max << endl;
    }

    return 0;
}