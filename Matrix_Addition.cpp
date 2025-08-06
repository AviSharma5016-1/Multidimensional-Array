#include <iostream>
using namespace std;

int main() {
    int rows1, columns1;
    cout << "For matrix 1:" << endl;
    cout << "Enter the number of rows: ";
    cin >> rows1;
    cout << "Enter the number of columns: ";
    cin >> columns1;

    cout << "For matrix 2:" << endl;
    int rows2, columns2;
    cout << "Enter the number of rows: ";
    cin >> rows2;
    cout << "Enter the number of columns: ";
    cin >> columns2;

    
    if (rows1 != rows2 || columns1 != columns2) {
        cout << "Matrices cannot be added due to different dimensions." << endl;
        return 0;
    }

   
    const int MAX = 100;
    int arr1[MAX][MAX], arr2[MAX][MAX], sum[MAX][MAX];

    cout << "Enter elements of 1st matrix (row-wise):" << endl;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
            cin >> arr1[i][j];

    cout << "The 1st matrix is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++)
            cout << arr1[i][j] << " ";
        cout << endl;
    }

    cout << "Enter elements of 2nd matrix (row-wise):" << endl;
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < columns2; j++)
            cin >> arr2[i][j];

    cout << "The 2nd matrix is:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++)
            cout << arr2[i][j] << " ";
        cout << endl;
    }
    cout << endl;

   
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];

    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}


/*OUTPUT
For matrix 1:
Enter the number of rows: 2
Enter the number of columns: 3
For matrix 2:
Enter the number of rows: 2
Enter the number of columns: 2
Matrices cannot be added due to different dimensions.
*/

/*OUTPUT
For matrix 1:
Enter the number of rows: 2 
Enter the number of columns: 2
For matrix 2:
Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of 1st matrix (row-wise):
1 2
3 4
The 1st matrix is:
1 2
3 4
Enter elements of 2nd matrix (row-wise):
4 5
6 7
The 2nd matrix is:
4 5
6 7

The sum of the two matrices is:
5 7
9 11
*/
