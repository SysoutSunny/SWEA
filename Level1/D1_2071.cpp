#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int T;
    cin >> T;        // �� �� �Է� ���� ����
    int sum[4] = {}; // �� ���� ��Ÿ���� �迭
    int arv[4] = {}; // �� ����� ��Ÿ���� �迭

    for (int i = 0; i < T; i++)
    {
        int temp = 0; // �ʱ�ȭ
        for (int j = 0; j < 10; j++)
        {
            int num;
            cin >> num;  // 10�� ���ڸ� ����
            temp += num; // �ӽ� ����
        }
        sum[i] += temp;                 // ������ �ε����� �־���
        arv[i] += round(sum[i] / 10.0); // ����� �Ҽ��� ù ��° �ڸ� �ݿø� ���� ��� (round)
    }
    // ��¹�
    for (int k = 0; k < 3; k++)
    {
        cout << "#" << k + 1 << " " << arv[k] << endl;
    }
}