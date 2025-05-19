#include <iostream>
#include <vector>
using namespace std;

// ������ ����
// N x N ����� ���⿡ ���缭 + 1 �ؼ� ����ϴ� ����
int main()
{
    int T;
    cin >> T;
    int arr[10][10] = {0}; // ��� �� �迭����
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N; // N x N�� ��� N�� �Է� �ޱ�

        int top = 0;        // ���� �� �� �ε���
        int bottom = N - 1; // ���� �Ʒ� �� �ε���
        int left = 0;       // ���� ���� �� �ε���
        int right = N - 1;  // ���� ������ �� �ε���

        int num = 1; // 1���� ä�� �������ϱ�

        cout << "#" << i + 1 << endl;

        // �� �࿡�� �Ʒ������� ���� && ���ʿ��� ���������� ����
        while (top <= bottom && left <= right)
        {
            // ������ -> ���� ä��� ����
            for (int j = left; j <= right; j++)
            {
                // arr[0][0], arr[0][1] ���� + 1��ŭ ����
                arr[top][j] = num++;
            }
            // �̰� �ϴ� ������ �� ���� ���� ������ ���� ���� ä��� ���ؼ� (arr[0][1] -> arr[1][0])
            top++;
            // ������ �Ʒ��� ä���
            for (int k = top; k <= bottom; k++)
            {
                // arr[0][2], arr[1][2]
                arr[k][right] = num++;
            }
            // ���� ���� ä��� ����
            right--;
            // top���� bottom�� ũ�ٸ� (�ϴ� ������ top++�� �ϰ� top�� �� ������ �Ǵϱ�)
            if (top <= bottom)
            {
                // ���� <- ���� ä��� ����
                for (int l = right; l >= left; l--)
                {
                    // arr[2][2], arr[2][1]
                    arr[bottom][l] = num++;
                }
                bottom--;
            }
            // left���� right�� ũ�ٸ�
            if (left <= right)
            {
                // ���� ���� ä���
                for (int h = bottom; h >= top; h--)
                {
                    // arr[2][0], arr[2][1]
                    arr[h][left] = num++;
                }
                left++;
            }
        }
        // ���
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}