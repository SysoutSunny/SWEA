#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; // �� �� �ݺ� �Ұ���
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M; // N x N ũ�� �迭, M x M ũ���� �ĸ�ä
        cin >> N >> M;
        int arrN[15][15] = {0}; // �ִ� 15 x 15 N �迭

        // �Է� ���� arrN �迭 �ֱ�
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                cin >> arrN[j][k];
            }
        }
        int max = 0; // M x M ũ�� �ִ�
        // N - M + 1 �ϸ� N x N ũ���� �迭 ���� ex) 5 - 2 + 1 = 4
        for (int I = 0; I < N - M + 1; I++)
        {
            for (int J = 0; J < N - M + 1; J++)
            {
                // ���⼭ �ʱ�ȭ�� �ؾ� ���� ��� ���� �� �ʱ�ȭ
                int sum = 0;
                // ���Ⱑ ���� ���������� M x M �ĸ�ä�� ���� ���ϴ� �� ex) 5 x 5�� 0�̸� (0 ~ 2) x (0 ~ 2) ���� (1 ~ 3) x (1 ~ 3) �̷������� ����
                for (int K = I; K < I + M; K++)
                {
                    for (int L = J; L < J + M; L++)
                    {
                        // M x M �迭�ȿ� �ִ� �� ���� ���ϱ�
                        sum += arrN[K][L];
                    }
                }
                // ���� M x M�� ���� ���� max���� ũ�ٸ�
                if (max <= sum)
                {
                    // �ִ�ġ ����
                    max = sum;
                }
            }
        }
        // ���
        cout << "#" << i + 1 << " " << max << endl;
    }
}