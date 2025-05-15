#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j) // 공식이 (0,0) (1,1) (2,2) (3,3) (4,4) 라서
            {
                cout << "#";
            }
            else
            {
                cout << "+";
            }
        }

        cout << endl;
    }
}