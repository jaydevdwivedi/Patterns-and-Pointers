#include <bits/stdc++.h>
using namespace std;

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Print 1st triangle
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col++;
        }

        // Print 2nd triangle
        while (col <= n)
        {
            cout << "* ";
            col++;
        }

        // Print 3rd triangle
        while (col <= n + row - 1)
        {
            cout << "* ";
            col++;
        }

        // Print 4th triangle
        while (col <= n * 2)
        {
            cout << n * 2 - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}