#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    if (rows > MAX || columns > MAX) {
        cout << "Size too big!\n";
        return 1;
    }

    if (rows != columns) {
        cout << "Matrix must be square for diagonal addition!\n";
        return 1;
    }

    int arr1[MAX][MAX];

    cout << "Enter elements of the matrix (row-wise):" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> arr1[i][j];

    int diagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        diagonalSum += arr1[i][i];
    }

    cout << "Sum of diagonal elements: " << diagonalSum << endl;

    return 0;
}


/*OUTPUT
Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of the matrix (row-wise):
1 2
3 4
Sum of diagonal elements: 5
*/
