#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; // �Է� �޴� ���ڿ�
    cin >> s; // �Է� ���� ���ĺ� �迭

    for (int i = 0; i < s.length(); i++)
    {
        // ���
        // at�� ���ڿ� �ε��� �� char�� ����
        cout << s.at(i) - 64 << " ";
    }
}