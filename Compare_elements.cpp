#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows < 2 || cols <= 0) {
        cerr << "Error: Matrix needs at least 2 rows for comparison and positive columns.\n";
        return 1;
    }

    int** mat = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }
    
    cout << "\nEnter the matrix elements, row by row:\n";
    for (int i = 0; i < rows; ++i) {
        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }
    
    cout << "\n--- Your Matrix ---\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    int greater = 0, lesser = 0, equal = 0;
    cout << "\n--- Alpha Row vs. Bravo Row ---\n";
    for (int j = 0; j < cols; ++j) {
        cout << "Column " << j + 1 << ": Alpha (" << mat[0][j] << ") vs. Bravo (" << mat[1][j] << ") -> ";
        if (mat[0][j] > mat[1][j]) {
            cout << "Alpha wins!\n";
            greater++;
        } else if (mat[0][j] < mat[1][j]) {
            cout << "Bravo wins!\n";
            lesser++;
        } else {
            cout << "It's a tie!\n";
            equal++;
        }
    }
    
    cout << "\n--- Tale of the Tape ---\n";
    cout << "Alpha Row Victories: " << greater << "\n";
    cout << "Bravo Row Victories: " << lesser << "\n";
    cout << "Drawn Contests: " << equal << "\n";
    
    for (int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
    
    return 0;
}

/*OUPUT
Enter the number of rows: 2
Enter the number of columns: 2

Enter the matrix elements, row by row:
Enter elements for row 1: 1 2
Enter elements for row 2: 3 4

--- Your Matrix ---
1       2
3       4

--- Alpha Row vs. Bravo Row ---
Column 1: Alpha (1) vs. Bravo (3) -> Bravo wins!
Column 2: Alpha (2) vs. Bravo (4) -> Bravo wins!

--- Tale of the Tape ---
Alpha Row Victories: 0
Bravo Row Victories: 2
Drawn Contests: 0
*/
