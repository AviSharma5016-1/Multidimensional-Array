#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "\nInvalid input. Rows and columns must be positive integers." << endl;
        return 1;
    }

    int mat[rows][cols];

    cout << "\nInput matrix elements-" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nMatrix Transpose:\n";
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

/*OUTPUT
Enter the number of rows for the matrix: 2
Enter the number of columns for the matrix: 3

Input matrix elements-
Element [1][1]: 10
Element [1][2]: 20
Element [1][3]: 30
Element [2][1]: 40
Element [2][2]: 50
Element [2][3]: 60

Original Matrix:
10      20      30      
40      50      60      

Matrix Transpose:
10      40      
20      50      
30      60   
*/
