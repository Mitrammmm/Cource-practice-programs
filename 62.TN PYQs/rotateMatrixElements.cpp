
                    // Time Complexity O(n × m) ; Every element is shifted once.
                    // Space Complexity O(1) ; Only prev and curr variables are used.

#include <iostream>
using namespace std;

void rotateElementsInMatrixClockwise(int n, int m, int mat[4][4])
{
    // starting boundaries of the current layer
    int row = 0, col = 0;

    int prev, curr;

    // ending boundaries of the current layer
    int lastRow = n;
    int lastCol = m;

    // process layer by layer
    while (row < lastRow && col < lastCol)
    {
        // if only one row or column remains, stop
        if (row + 1 == lastRow || col + 1 == lastCol)
            break;

        // store the first element of the next row
        // this will replace the first element of top row
        prev = mat[row + 1][col];

        // --------------------
        // 1️⃣ Rotate Top Row
        // --------------------
        for (int i = col; i < lastCol; i++)
        {
            curr = mat[row][i];      // store current value
            mat[row][i] = prev;      // replace with previous value
            prev = curr;             // update prev
        }

        row++; // top row processed

        // --------------------
        // 2️⃣ Rotate Right Column
        // --------------------
        for (int i = row; i < lastRow; i++)
        {
            curr = mat[i][lastCol - 1];
            mat[i][lastCol - 1] = prev;
            prev = curr;
        }

        lastCol--; // right column processed

        // --------------------
        // 3️⃣ Rotate Bottom Row
        // --------------------
        if (row < lastRow)
        {
            for (int i = lastCol - 1; i >= col; i--)
            {
                curr = mat[lastRow - 1][i];
                mat[lastRow - 1][i] = prev;
                prev = curr;
            }
        }

        lastRow--; // bottom row processed

        // --------------------
        // 4️⃣ Rotate Left Column
        // --------------------
        if (col < lastCol)
        {
            for (int i = lastRow - 1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }

        col++; // left column processed
    }

    // print the rotated matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    int a[4][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    rotateElementsInMatrixClockwise(4, 4, a);

    return 0;
}