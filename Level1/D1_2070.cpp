#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int T; // �� �� �Է¹��� ����
    cin >> T;
    int a, b; // ���� 2���� �Է��� �޾Ƽ� ū�� ������ �� ����

    for (int i = 0; i < T; i++)
    {
        // ���� 2�� �Է¹ޱ�
        cin >> a >> b;
        // ���� a�� b���� ũ�ٸ�
        if (a > b)
        {
            cout << "#" << i + 1 << " " << ">" << endl;
        }
        // ���ٸ�
        else if (a == b)
        {
            cout << "#" << i + 1 << " " << "=" << endl;
        }
        // �ƴ� ��� ����
        else
        {
            cout << "#" << i + 1 << " " << "<" << endl;
        }

        return 0;
    }
}