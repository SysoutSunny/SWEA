#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// �ڸ��� ���ϱ�
int main()
{
    int T; // �ڿ��� �Է¹ޱ�
    cin >> T;
    int sum = 0; // ����

    // T�� 0���� Ŭ ������
    while (T > 0)
    {
        // 6789�� ó�� 9�� ������ �״��� 8...
        sum += T % 10; // �ڸ��� �հ�� 10���� ���� ���� ������
        T /= 10;
    }
    // ���
    cout << sum;

    return 0;
}