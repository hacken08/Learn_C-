#include <iostream>

using namespace std;

int main()
{

    cout << "enter matrix number: ";
    static int mtrx[2][2];

    //  input matrix
    for (int a = 0; a <= 1; a++)
    {
        for (int b = 0; b <= 1; b++)
        {
            cin >> mtrx[a][b];
        }
    }

    // Printing Matrix
    for (int r = 0; r <= 1; r++)
    {
        for (int c = 0; c <= 1; c++)
        {
            if (c == 0 && r == 0)
            {
                cout << "Your Matrix => ";
            }

            if (r >= 1 && c == 0)
            {
                cout << "               ";
            }

            cout << mtrx[r][c] << "    ";
        }

        cout << endl;
    }

    return 0;
}
